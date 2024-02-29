


            /// Rev string using stack
            // 020922, Friday

    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;


    int main() {

        Stack <char> st;
        string s;

        // taking the string
        cout<<"Input String To Reverse: ";
        cin>>s;

        int i, n;
        // pushing char by char in the stack
        for(i=0; i<s.length(); i++)
        {
            char ch = s[i];
            st.push(ch);
        }

        // taking a empty string
        string ans = "";
        // until empty, popping the stack and inserting the char in the string
        while(!st.empty())
        {
            char ch = st.Top();
            //ans.push_back(ch); it will also work
            ans+=ch;
            st.pop();
        }

        cout<<"The reversed string is: ";
        cout<<ans<<endl;


        return 0;
    }
