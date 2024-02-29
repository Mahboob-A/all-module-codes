


            /// 25-5 Infix to Prefix Conversion | Part-2 CODE
            // 310822, Wednesday, 07.30 am





    #include <bits/stdc++.h>
    #include"MYSTACKGENMID.h"
    using namespace std;

    /// function to check precision of operators
    int precisionClac(char c)
    {
        if (c=='^')
            return 3;
        else if (c=='*' || c=='/')
            return 2;
        else if (c=='+' || c=='-')
            return 1;
        else
            return -1;
    }

    /// function to convert infix into prefix
    /// we will take a string and as a result we will return a string
    string infixToPrefix(string chk)
    {
        // step 01: reverse the string
        reverse(chk.begin(), chk.end());

        // step 02: take a char type stack as we will push char in the stack and a result string to store the prefix version of infix
        Stack<char>st;
        string result;

        // step 03: run a for loop for the string and perform appropriate actions
        for (int i=0; i<chk.length(); i++)
        {
            // check if the char is operand, if so, simply insert them in the result string
            if (chk[i]>='0' && chk[i]<='9')
            {
                result+=chk[i];
            }
            // else check if it is a opening bracket/parenthesis -> ' ) ' // as the string is reversed,
            // ' ) ' ==> now opening bracket/parenthesis and ' ( ' ==> is now closing bracket/parenthesis
            // if it is opening ' ) ', then simply push it in the Stack
            else if (chk[i] == ')')
            {
                st.push(chk[i]);
            }
            // else check if it is closing parenthesis, if so, pop all the element of the stack until
            // the opening ' ) ' parenthesis is not found but not in the case of empty stack
            else if (chk[i] == '(')
            {
                while(!st.empty() && st.Top() != ')')
                {
                    result += st.pop();
                }
                // now check if the stack is not empty, if not empty then the stack has the ')' element till now,
                // so just pop it as we do not need it anymore or we do not want to add it in our result string
                if (!st.empty())
                {
                    st.pop();   // popping the stack if not empty, then popping the opening ')' parenthesis
                }
            }

            // else now these are the operators. In the case of operators, if the stack top has greater
            // precision operator and the incoming operator is lesser precision operator, then we need to pop until
            // we find a operator less than or equal to the precision of the incoming operator
            else
            {
                while (!st.empty() && precisionClac(st.Top())>=precisionClac(chk[i]))
                {
                    result +=st.pop();
                }
                // if the top of the stack is less or equal to the precision of the incoming operator, then simply push it
                st.push(chk[i]);
            }
        }

        // step 04: now as we have traversed the whole string, now we need to empty the stack and add the operators in the result string
        while(!st.empty())
        {
            result+=st.pop();
        }

        // step 05: now again reverse the result string as this is the prefix version of the infix string
        reverse(result.begin(), result.end());

        // step 06: return the result string
        return result;
    }

    /// a function to calculate the prefix input
    int prefixEvaluation(string chk)
    {
        Stack <int> st;
        // loop running from reverse order so -1 is basically ignoring the NULL in the string
        for (int i=chk.length()-1; i>=0; i--)
        {
            if (chk[i]>='0' && chk[i]<='9')
            {
                cout<<"Stack Element "<<chk[i]<<endl;
                st.push(chk[i] - '0');
            }
            else
            {
                int a = st.pop();
                int b = st.pop();
                cout<<"A "<<a<<endl;
                cout<<"B "<<b<<endl;
                switch(chk[i])
                {

                    case '+':
                        st.push(a+b);
                        cout<<"A+B: "<<a+b<<endl<<endl;
                        break;
                    case '-':
                        st.push(a-b);
                        cout<<"A-B: "<<a-b<<endl<<endl;
                        break;
                    case '*':
                        st.push(a*b);
                        cout<<"A*B: "<<a*b<<endl<<endl;
                        break;
                    case '/':
                        st.push(a/b);
                        cout<<"A/B: "<<a/b<<endl<<endl;
                        break;
                    case '^':
                        st.push(pow(a, b));
                        cout<<"A^B: "<<(pow(a, b))<<endl<<endl;
                        break;

                    default:
                        break;
                }
            }
        }
        // step 03: as the top of the stack is now holding the answer, then return the top
        return st.Top();

    }


    int main() {

        // infix string initialization (7+(4*5))-(2+0)  (1+2)*3-4+5   (5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))
        string infix = "(1+2)*3-4+5";

        // converting the infix into prefix
        string prefix = infixToPrefix(infix);

        // printing
        cout<<"The infix is: "<<infix
        <<endl<<"The prefix of the infix is: "<<prefix
        <<endl<<"The prefix calculaion/evaluation is: "<<endl<<prefixEvaluation(prefix);  // calculaion or evaluation of the prefix notation

        //cout<<endl<<prefixEvaluation("+*423")<<endl;


        return 0;
    }
