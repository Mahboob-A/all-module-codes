


            ///25-6 Infix to Postfix & Postfix Evaluation CODE
            // 310822, Wednesday, 10.30 am


    // the code produces ( - ) minus in the result of the following input. The bug might be in evaluation. fix it.

    #include <bits/stdc++.h>
    #include"MYSTACKGENMID.h"
    using namespace std;

    /// a function to calculate precision
    int precisionCalc(char c)
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

    /// a function to convert infix to postfix
    string infixToPostfix(string chk)
    {
        // step 01: take a char type stack and a string to store the result
        Stack <char> st;
        string result;

        // step 02: run a loop from beginning to end and perform appropriate actions
        for (int i=0; i<chk.length(); i++)
        {
            // check if chk[i] is operand, then simply add it result string
            if(chk[i]>='0' && chk[i]<='9')    // if want to work with alphabet, then chk[i]>='a' && chk[i] <='z' || chk[i]>='A' && chk[i] <='Z'
                result += chk[i];

            // now check if it is an opening parenthesis i.e '(' [as the string is not reversed for postfix, the parenthesis is as usual ( is opening and ) is closing]
            // the simply push it in the stack
            else if (chk[i] == '(')
                st.push(chk[i]);

            // now check if it is a closing parenthesis i.e ')', then keep popping the top of the stack until opening '('
            // parenthesis is not found provided the stack is not empty
            else if (!st.empty() && chk[i]==')')
            {
                result += st.pop();
                if (!st.empty())
                {
                    st.pop();
                }
            }

            // now the case of operators. Now keep e check if the top of the stack is less than or equal to the incoming operator
            // if the incoming operator is less than or equal to the top of the stack then push it, or if the top of the stack
            // is greater than the incoming operator (by precision), then keep popping the top until a operator found less than or equal to
            // the incoming operator and add those popped operator in result provided the stack is not empty
            else
            {
                while (!st.empty() && precisionCalc(st.Top())>=precisionCalc(chk[i]))
                {
                    result += st.pop();
                }
                // if the incoming operator is less than or equal to the top of the stack, then simply push the incoming operator
                st.push(chk[i]);
            }
        }

        // step 04: now as the whole string is traversed, pop the all elements of the stack and store those in result
        while(!st.empty())
        {
            result += st.pop();
        }

        // step 05: now return the result string
        return result;
    }

    /// a function to evaluate postfix notation
    int postfixEvaluation(string chk)
    {
        // step 01: create a int stack as int vlaues will be stored in the stack
        Stack <int> st;

        // step 02: run a loop from left to right of the string and perform approprite actrions
        for (int i=0; i<chk.length(); i++)
        {
            // if it is operand then push in the stack converting into integer form
            if (chk[i]>='0' && chk[i]<='9')
            {
                cout<<"Stack Element "<<chk[i]<<endl;
                st.push(chk[i] - '0');
            }
            // else if is operator, then do the following
            else
            {
                // pop two elements from the stack and store in two variables
                int b = st.pop();
                int a = st.pop();
                cout<<"B "<<b<<endl;
                cout<<"A "<<a<<endl;
                // run a switch case, and perform actions based on the case
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

        //  (5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))  theory final question is this
        // (4*(3+5))-(2+0)
        string infix = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
        string postfix = infixToPostfix(infix);

        cout<<"The infix is: "<<infix
        <<endl<<"The postfix notation of the infix is: "<<postfix
        <<endl<<"The postfix evaluation is: "<<postfixEvaluation(postfix)<<endl;



        return 0;
    }

