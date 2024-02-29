


            /// A 6-1 Introduction to String Class in Cpp.cpp




    /// 6-1_ Introduction to String Class in C++
    // 180722 07.00 pm

    #include <bits/stdc++.h>

    using namespace std;

    int main() {

        string st = "abcd";
        string str1 = "wxyz";
        st = str1;  // sting copy
        cout<<st<<endl;
        cout<<str1<<endl;

        cout<<st.capacity()<<endl;

        cout<<st.max_size()<<endl;

        string str(10, 'a');
        cout<<str<<endl;

        str1 += st;   // string concat
        cout<<str1<<endl;


        if (st == str1)  // string compare
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        return 0;
    }
