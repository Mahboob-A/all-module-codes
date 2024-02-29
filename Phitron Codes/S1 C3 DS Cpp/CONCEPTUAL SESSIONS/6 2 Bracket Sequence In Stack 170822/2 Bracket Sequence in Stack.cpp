





    /// Conceptual Session 6 - 2: Bracket Sequence Using Stack
    // 260822, Friday, 05.30 am



    // Conceptual Session 6 - 2: Bracket Sequence Using Stack
    // 260822, Friday, 05.30 am

    /// stack in STL
    #include <bits/stdc++.h>
    using namespace std;
    int main() {



        /// Bracket Sequence

        string s;
        cin>>s;

        int n;
        n = s.length();

        stack<char> st;

        for (int i=0; i<n; i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if ((st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']') || (st.top() == '{' && s[i] == '}'))
            {
                cout<<"Top: "<<st.top()<<endl;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }


        }

        cout<<"Size: "<<st.size()<<endl;


        if (st.empty())
            cout<<"Right Match"<<endl;
        else
            cout<<"Wrong Match"<<endl;










        return 0;
    }
