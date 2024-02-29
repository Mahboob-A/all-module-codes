


                /// 42-4 Finding Frequency of Array Elements using Map



    // 42-4 Finding Frequency of Array Elements using Map
    // 250922, Monday, 04.30 pm
    #include <bits/stdc++.h>
    using namespace std;

    // a very short ans crisp method to find the Frequency of array
    int main() {

        int n;
        cin>>n;

        int arr[n];

        // taking input in the array
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        // decalring a map
        map<int, int>m;

        // hashing
        for(int i=0; i<n; i++)
        {
            m[arr[i]]++;
        }

        // iterator of map and print
        map<int, int>::iterator it;
        for(it = m.begin(); it!=m.end(); it++)
        {
            cout<<it->first<<" | "<<it->second<<endl;
        }


        /*
        for(it = m.begin(); it!=m.end(); it++)
        {
            cout<<(*it).first<<" | "<<(*it).second<<endl;
        }
        */

        /*
        for(auto i: m)
        {
            cout<<i.first<<" | "<<i.second<<endl;
        }
        */





        return 0;
    }
