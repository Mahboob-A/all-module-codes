


    /// valid parenthesis basic approach
    // 020922, Friday
    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;

    bool validParenthesis(string s)
    {
        Stack<int>st;
        for(int i=0; i<s.length(); i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.Top() == '{' && s[i] == '}' || st.Top() == '[' && s[i] == ']' || st.Top() == '(' && s[i] == ')')
            {
                //st.push(s[i]);
                //st.pop();
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        if(st.empty())
            return true;
        else
            return false;
    }


    int main() {

        string s;
        cin>>s;

        validParenthesis(s);
        if(validParenthesis(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



        return 0;
    }


    /// another code


    /*
        // reverse a string using stack
    // pr day 01: week 07: QS 6
    // reverse first k elements of a queue
    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;

    bool validParenthesis(string s)
    {
        Stack<char>st;
        for(int i=0; i<s.length(); i++)
        {
            char ch = s[i];
            // if opening bracket, push in the stack
            if(ch == '{' || ch == '[' || ch == '(')
            {
                st.push(ch);
            }
            else
            {
                if(!st.empty())
                {
                    char top = st.Top();
                    if(top == '{' && ch == '}' || top == '[' && ch == ']'|| top == '(' && ch == ')')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        if(st.empty())
            return true;
        else
            return false;
    }


    int main() {

        string s;
        cin>>s;

        validParenthesis(s);
        if(validParenthesis(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



        return 0;
    }





    */
