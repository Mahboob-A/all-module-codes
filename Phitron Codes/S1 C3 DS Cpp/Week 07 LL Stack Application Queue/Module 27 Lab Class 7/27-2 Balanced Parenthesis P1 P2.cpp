


    /// 27-1 Balanced Parenthesis | Part-1 (Theory) Part 2 (Code) (Lab Class 07)
    // 010922, Thursday (mod date: 220822)

    #include <bits/stdc++.h>
    #include"MYSTACKGENMID.h"
    using namespace std;

    bool parenthesisBalanced(string s)
    {
        // declare a char type stack as we only need to insert char by char in the Stack
        Stack <char> st;

        // take another bool isBalanced = true to counter the not Balanced cases turning it false
        bool isBalanced = true;

        // step 01: Corner Case:
        // check if the first Parenthesis is a closing Parenthesis, then return false
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')
        {
            return false;
        }

        // step 02: run a loop till size of string and push all the opening brackets in the stack
        // and check if a closing bracket comes, then check it with the top of the stack, it is matches
        // then pop it or if it does not match, then this is not a Balanced Parenthesis hence make isBalanced = false
        // and break because we do not need to keep running the loop as it is found as not Balanced Parenthesis already.
        for(int i=0; i<s.length(); i++)
        {
            // check if it is opening Parenthesis, then push it in the stack
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                st.push(s[i]);
            }
            // now check if the incoming Parenthesis is a closed Parenthesis, then check if it matches
            // with the top of the stack, if matches then it is a Balanced Parenthesis and pop it, it does not
            // match, then it is not Balanced Parenthesis and make isBalanced as false do it for each 3 closed Parenthesis
            else if(s[i] == ')')
            {
                if(st.Top() == '(')
                {
                    st.pop();
                }
                else
                {
                    isBalanced = false;
                    break;
                }
            }
            else if(s[i] == ']')
            {
                if(st.Top() == '[')
                {
                    st.pop();
                }
                else
                {
                    isBalanced = false;
                    break;
                }
            }
            else if(s[i] == '}')
            {
                if(st.Top() == '{')
                {
                    st.pop();
                }
                else
                {
                    isBalanced = false;
                    break;
                }
            }
        }
        // now check if any Parenthesis is left in the stack, if remains, then closing Parenthesis did not come for these Parenthesis in stack
            // so, in this case, make isBalanced as false
            if(!st.empty())
            {
                isBalanced = false;
            }

            return isBalanced;

    }



    int main() {

        // the bug is in the Top() function. If the stack is not null, then it is working fine, but
        // if the stack is empty then after the cout a garbage is also being printed. Why?

        string checkBalance;
        //cin>>checkBalance;

        Stack<int>st;
        st.Top();

        /*
        if(parenthesisBalanced(checkBalance))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        */
        return 0;
    }
