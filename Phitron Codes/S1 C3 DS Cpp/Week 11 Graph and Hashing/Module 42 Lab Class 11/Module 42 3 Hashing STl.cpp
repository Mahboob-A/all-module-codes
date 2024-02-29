


            /// Module 42 3 Hashing STL
    // Module 42 3 Hashing in STL
    // 250922, Monday, 03.30 pm
    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        /*
        we use hashing in map data structure.
        red black tree is used to implement map and array of bucket is used to implement unordered map.
        in map, the first data type if for key's data type and the second is for the value's data type.
        In ordered or normal map, we get the key as sorted however they are inserted, it does not matter,
        the keys will be sorted in ascending order
        On the other hand, in unordered_map, we get the key value as they are inserted, it does not follow any soring pattern
        */

        map<int, int>m;
        //unordered_map<int, int>m;

        // pushing the value assessing key that's why here we do not need to use make_pair
        // but if we use isert() function then we must use make_pair()

        m[2] = 5;
        m[4] = 6;
        m[3] = 1;

        m.insert(make_pair(1, 10));

        // printing the map
        cout<<"Key  |  "<<"Value "<<endl<<endl;
        for(auto i : m)
        {
            cout<<i.first<<"    |  "<<i.second<<endl;
        }









        return 0;
    }
