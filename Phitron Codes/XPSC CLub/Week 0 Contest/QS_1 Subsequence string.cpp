
// Fist contest before forming team
// date: 201022 Thursday, 03.30 pm

// find if a string is subsequence of another string




    #include <bits/stdc++.h>
    using namespace std;

    void findSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        while(i<s.length() && j<t.length())
        {
            if(s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        if(i == s.length())
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    // file i/p EOF
    int main() {

        string x, y;
        while(cin>>x>>y)
        {
            findSubsequence(x, y);
        }

        return 0;
    }
