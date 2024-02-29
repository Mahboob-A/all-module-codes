


            /// QS 8 Chk If String Palinfrome NOT Stack
            // 030922, 11.00 am



    // practice day 02: week 07:

    #include <bits/stdc++.h>
    using namespace std;

    bool isPalindrome(string str)
    {
        int len = str.length();

        for (int i=0; i<len/2; i++)
        {
            if (str[i] != str[len-i-1])
            {
                 return false;
            }
        }
        return true;
    }

    bool isPalindrome2(string ss)
    {
        int len = ss.length();
        for(int i=0; i<len/2; i++)
        {
            if(ss[i] != ss[len-i-1])
            {
                return false;
            }
        }
        return true;
    }

    int main() {

        string s;
        cin>>s;
        if(isPalindrome(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        cout<<endl;

        if(isPalindrome2(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;





        return 0;
    }
