

    /// 300722

    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        string st;
        cin>>st;

        // min max technique

        int a = INT_MAX;
        int z = INT_MIN;

        for (int i=0; i<st.size(); i++)
        {
            char c = st[i];
            if (c == 'A')
            {
                a = min(a, i);
            }
            if (c == 'Z')
            {
                z = max(z, i);
            }
        }

        cout<<a<<" "<<z<<endl;

        int res = ((z-a)+1);

        cout<<res<<endl;

        return 0;
    }


    /// using two loops:



    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        string st;
        cin>>st;


        int idxA, idxZ;
        for (int i=0; i<st.length(); i++)
        {
            if (st[i] == 'A')
            {
                idxA = i;
                break;
            }
        }


        for (int j=st.size()-1; j>=0; j--)
        {
            if (st[j] == 'Z')
            {
                idxZ = j;
                break;
            }
        }

        int res = ((idxZ - idxA)+1);

        cout<<res<<endl;

        return 0;
    }
