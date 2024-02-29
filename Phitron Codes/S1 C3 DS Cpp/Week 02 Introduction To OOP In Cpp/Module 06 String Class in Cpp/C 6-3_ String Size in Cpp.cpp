


                /// C-C 6-3_ String Size in C++
                // 190722, 11.30 am

    #include <bits/stdc++.h>

    using namespace std;

    int main() {
        // findin length of a string
        string st = "abcd";
        cout<<st.length()<<endl;

        // finding size of a objct in memory
        string st1 = "ptok";
        cout<<st1.size()<<endl;

        // resizing a string function
        string st2 = "abcdefgh";
        cout<<st2<<" "<<st2.size()<<endl;
        st2.resize(4);
        cout<<st2<<" "<<st2.size()<<endl;

        // clearing a string obejcrt: clear() funcion
        string st3 = "abcdefghijkl";
        st3.clear();
        cout<<st3<<endl;

        // checking if a string object is emprt or not: empty() function - returns boolean answer
        string st4;
        if (st4.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        // checking present capacity of the string object: capacity() functoin
        string st5 = "abcd";
        cout<<st5.capacity()<<endl;





        return 0;
    }
