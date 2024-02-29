


                /// VECTOR STL Print WAY

    // 38-3: Vector & Priority Queue in STL //
    // 200922, Tuesday, 08.00 am
    #include <bits/stdc++.h>
    using namespace std;


    int main() {

        vector<int>v (3, -1);  // decalring size and initializing it with 0.

        // taking input from user n size
        /*
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
        */

        v.push_back(5);
        v.push_back(10);
        v.pop_back();

        cout<<"Print: normal i iterate: "<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }

        cout<<endl<<endl;

        cout<<"Print: it iterate: "<<endl;
        // iterator declaration

        // if only want to use "it" iterator, then we must declate it as below as per vector data type.
        vector<int> :: iterator it;
        for(it = v.begin(); it!=v.end(); it++)
        {
            cout<<*it<<" ";
        }

        cout<<endl<<endl;

        cout<<"Print: auto register range based traversal: "<<endl;
        for(auto element: v)
        {
            cout<<element<<" ";
        }

        cout<<endl<<endl;

        cout<<"Print: auto register in place of iterator: "<<endl;
        // we can use auto and then the rest of it iterator same if we do not want to declare it as ahown above
        for(auto it=v.begin(); it!=v.end(); it++)
        {
            cout<<*it<<" ";
        }

        cout<<endl<<endl;



        return 0;
    }

