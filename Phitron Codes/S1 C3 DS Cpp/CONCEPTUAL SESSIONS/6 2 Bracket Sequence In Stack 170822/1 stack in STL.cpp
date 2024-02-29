

            /// Stack in STL In Stack 170822
            // 260822, 06.00 am




    // Conceptual Session 6 - 2: Bracket Sequence Using Stack
    // 260822, Friday, 05.30 am

    /// stack in STL
    #include <bits/stdc++.h>
    using namespace std;
    int main() {

        stack <int> st;
        int a, n=10;

        for (int i=1; i<=n; i++)
        {
            st.push(i);
        }

        cout<<"Size: "<<st.size()<<endl;

        if (st.empty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"Stack has element"<<endl;
        }


        for(int i=0; i<n; i++)
        {
            cout<<st.top()<<endl;
            st.pop();
        }

        cout<<"Size: "<<st.size()<<endl;

        if (st.empty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"Stack has element"<<endl;
        }

        cout<<st.top()<<endl;
        st.pop();
        cout<<st.top()<<endl;





        return 0;
    }

