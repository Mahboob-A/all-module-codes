


            /// rev string inplace
            // 020922, friday



    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;

    string revstring(string s)
    {
        int i, j;
        for(i=0, j=s.length()-1; i<j; i++, j--)
        {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
        return s;
    }


    int main() {

        string s;
        cin>>s;
        s = revstring(s);

        cout<<endl<<s<<endl<<endl;




        return 0;
    }
