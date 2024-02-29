



            /// QS 7 rev string until dot
        // 020922, Friday, 10.30 pm

    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;


    void revStringByDot(string s)
    {
        Stack<char>st;
        int len = s.length();
        cout<<"Length is: "<<len<<endl;
        int count = 0;
        for(int i=0; i<s.length(); i++)
        {
            char ch = s[i];
            if(ch != '.')
            {
                st.push(ch);
            }
            else
            {
                while(!st.empty())
                {
                    char ch = st.Top();
                    st.pop();
                    //cout<<" -ch: "<<ch<<" ";
                    cout<<ch;
                    count++;
                }
                //if(count != len-1)

                    cout<<'.';

            }
        }
        // manually printing the last (i.am.ok) ok part of the string
        while(!st.empty())
        {
            char ch = st.Top();
            st.pop();
            cout<<ch;
            count++;
        }


    }



    int main() {

        string s;
        cin>>s;

        revStringByDot(s);



        return 0;
    }






