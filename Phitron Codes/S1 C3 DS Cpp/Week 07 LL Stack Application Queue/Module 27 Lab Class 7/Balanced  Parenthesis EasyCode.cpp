
    // 27-1 Balanced Parenthesis | easy code but other one is optimized as that has break to stop the loop
    #include <bits/stdc++.h>
    #include"MYSTACKGENMID.h"
    using namespace std;

    bool checkParenthesisBalance(string s)
    {
        Stack<char>st;
        for(int i=0; i<s.length(); i++)
        {
            // if the stack is empty, then push
            if(st.empty())
            {
                st.push(s[i]);
            }
            // if the s[i] is a Closing Parenthesis then chekc the top of the stack, if the top of the stack is the
            // opening Parenthesis then pop it.
            else if(st.Top() == '(' && s[i] == ')' || st.Top() == '{' && s[i] == '}' || st.Top() == '[' && s[i] == ']')
            {
                cout<<"Top: "<<st.Top()<<" "<<s[i]<<" :Closing"<<endl;
                st.pop();
            }
            // if the stack is not empty and the incoming Parenthesis is not a Closing Parenthesis then it is a opening Parenthesis
            // in this case also just push it in the stack.
            else
            {
                st.push(s[i]);
            }
        }

        // if any in the element left in the stack, then it is not balanced Parenthesis
        cout<<"Remaining in stack: "<<st.size()<<endl;
        //bool check = st.empty();
        return st.empty();
    }


    int main() {

        // the bug is in the Top() function. If the stack is not null, then it is working fine, but
        // if the stack is empty then after the cout a garbage is also being printed. Why?
        string parenthesis;
        cin>>parenthesis;
        if(checkParenthesisBalance(parenthesis))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


        return 0;
    }
