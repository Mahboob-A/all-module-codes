


            /// QS 6 Rev String Using Stack
             // 030922, Saturday, 07.00 am



    // practice day 02: week 07:
    // QS 6: Write a program to reverse a string using stack.
    #include <bits/stdc++.h>
    #include"MYSTACKGEN.h"
    #include" MYQUEUEGEN.h"
    using namespace std;


    void revString(string s, Stack<char>&st)
    {
        string ans = "";
        for(int i=0; i<s.length(); i++)
        {
            st.push(s[i]);
        }
    }


    int main() {


        string s;
        cin>>s;

        Stack <char> st;
        revString(s, st);

        while(!st.empty())
        {
            char ch = st.Top();
            st.pop();
            cout<<ch;
        }



        return 0;
    }
