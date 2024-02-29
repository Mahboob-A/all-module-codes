


            /// QS 9 Check IF String Palin Using Stack
            // 030922, Saturday, 11.30 am



    // practice day 02: week 07:

    #include <bits/stdc++.h>
    #include"MYSTACKGEN.h"
    #include" MYQUEUEGEN.h"
    using namespace std;

    void checkStringPalin(string s)
    {
        Stack<char>st;
        int i=0;
        int len = s.length();
        // pushing the string in the Stack
        while(i<len)
        {
            st.push(s[i]);
            i++;
        }

        // popping checking with the string if they match or not
        int j=0;
        while(j<s.length())
        {
            if(s[j] != st.pop())
                break;
            j++;
        }

        if(st.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

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
        checkStringPalin(s);


        return 0;
    }
