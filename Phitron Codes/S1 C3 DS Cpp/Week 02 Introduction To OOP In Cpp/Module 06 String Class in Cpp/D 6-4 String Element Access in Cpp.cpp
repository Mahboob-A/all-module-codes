


                /// D-D 6-4 String Element Access in C++
                // 190722, 12.30 pm

    #include <bits/stdc++.h>

    using namespace std;

    int main() {

        string st = "abcdefgh";
        cout<<st[3]<<endl;
        // both work in same mechanism to access the array
        cout<<st.at(4)<<endl;


        // function to access the [0]th index: frint() function
        cout<<st.front()<<endl;

        // function to access to last index: back() function
        cout<<st.back()<<endl;

            // back() function works in this mechanism:
            /*
        cout<<st[st.size()-1];
        cout<<st[st.length()];
            */

        cout<<endl<<endl<<endl;

        cout<<st.length()<<endl;  // printing length
        cout<<st.size()<<endl;    // printing size



        return 0;
    }
