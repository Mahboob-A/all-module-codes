


            /// QS 4 Check Redundant Bracket Stack
            // 030922, 03.30 pm



    // practice day 02: week 07:
    // QS 6: Write a program to reverse a string using stack.
    #include <bits/stdc++.h>
    #include"MYSTACKGEN.h"
    #include" MYQUEUEGEN.h"
    using namespace std;

    bool hasDupeParenthesis(string s)
    {
        Stack<char>st;

        for(int i=0; i<s.length(); i++)
        {
            // if the char is any type of operator or opening parenthesis then insert in the Stack
            char ch = s[i];

            if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '^' || ch == '%')
            {
                st.push(ch);
            }
            else
            {
                // else ch might be a closing parenthesis or alphabets. Ignore alphabets
                // if ch == a closing parenthesis i.e ')', then run a while loop until st.Top() has '(' the opening parenthesis is
                // found. In between check if inside the opening and closing parenthesis, if the top has any kind of
                // operator, then that particular opening and closing parenthesis is not redundant and make bool var as false.
                if(ch == ')')
                {
                    bool isRedundant = true;
                    while(st.Top() != '(')
                    {
                        char top = st.Top();
                        if(top == '+' || top == '-' || top == '/' || top == '*' || top == '^' || top == '%')
                        {
                            isRedundant = false;
                        }
                        st.pop();
                    }
                    // now pop the opening parenthesis in the stack as the while loop run before the opening parenthesis
                    st.pop();

                    // return true if still isRedundant is true
                    if(isRedundant == true)
                    {
                        return true;
                    }
                }
            }

        }
        // if isRedundant has become false, then the return inside the for loop wont execute, then return false
        // i.e the expression has not any duplicate parenthesis
        return false;
    }


    int main() {
        /*
        Approach:
            1. Take i=0 and int len = s.length and while(i<len). Push st.push(s[i]) in the char stack and incriment i
            2. All the string char are pushed in the stack.
            3. Now take while j=0 and j<len  and check if s[j] is matches with top of the stack. If matches, then pop
               and incriment j and if doesnot, then break.
            4. If the stack is empty, then the string is palindrome else not.
        */


        string s;
        cin>>s;

        // if isRedundant returns true, then the expression has duplicate parenthesis else no
        if(hasDupeParenthesis(s) == true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


        return 0;
    }
