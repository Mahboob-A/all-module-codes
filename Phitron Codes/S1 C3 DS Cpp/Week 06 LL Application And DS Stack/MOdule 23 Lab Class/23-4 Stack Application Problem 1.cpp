


            /// 23-4 Stack Application | Problem 1
            // 250822, 07.00 am

        /// reverse sentence word by word

    /// 23-4 Stack Application | Problem 1

    #include <bits/stdc++.h>
    #include"MyStackTemplateHeader.h"   // this problem has been implemented by the self made template header file
    using namespace std;


    // returning the reversed stack in the main
    Stack <string> revSentenceWithStack(string sentence, Stack <string> st)
    {
        //Stack <string> st;  for only printing in the function, then only string will be rceived in the parameter
        for (int i=0; i<sentence.length(); i++)
        {
            string word = "";
            while (i<sentence.length() && sentence[i] != ' ')
            {
                word += sentence[i];
                i++;
            }
            st.push(word);
        }

        //  only if want to print in the function
        /*
        while (!st.empty())
        {
            cout<<st.pop()<< " ";
            /*
            cout<<st.Top()<< " ";
            st.pop();

        }
        */
        return st;
    }

    int main() {

        Stack <string> st;

        string s = "I am human";
        st = revSentenceWithStack(s, st);  // function calling and receiving in main

        cout<<"Top element before reverse:  "<<st.Top()<<endl;

        cout<<"reversed sentence is:  ";
        while (!st.empty())
        {
            cout<<st.pop()<< " ";
            /*
            cout<<st.Top()<< " ";
            st.pop();
            */

        }
        cout<<"\nSize: "<<st.size()<<endl;
        cout<<st.Top()<<endl;
        if (!st.empty()) cout<<"Full "<<endl;
        else cout<<"Empty "<<endl;



        return 0;
    }
