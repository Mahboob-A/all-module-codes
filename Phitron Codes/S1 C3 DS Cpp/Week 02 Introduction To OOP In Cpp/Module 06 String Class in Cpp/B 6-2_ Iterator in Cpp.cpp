


    /// B 6-2   Iterator in cpp
    // 190722, 07.30 am

    #include <iostream>

    using namespace std;

    int main() {
        // normal iterator: iterating from left to write
        string st = "abcdefgh";
        string :: iterator it;
        for (it=st.begin(); it!=st.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;

        // reverse iterator: iterating from right to left
        string str = "wxyz";
        string :: reverse_iterator it1;
        for (it1=str.rbegin(); it1<str.rend(); it1++)
        {
            cout<<*it1<<" ";
        }
        cout<<endl;

        // one place initialization
        string sr = "123456789";

        for (string :: iterator it2=sr.begin(); it2 != sr.end(); it2++)
        {
            cout<<*it2<<" ";
        }
        cout<<endl;

        // with auto keyword: do not need to declare iterator from class scope

        string tr = "ijklmnop";
        for (auto it3=tr.rbegin(); it3 != tr.rend(); it3++)
        {
            cout<<*it3<<" ";
        }

        return 0;
    }
