


            /// 38 3 and 38 4 K Sorted Array
            // 200922, Tuesday, 01.00 pm



    /// the concept is there will be k number of array and from all of the array, we have to sort all the elements of all the array in one array
    // the input will be a 2D vector



    // 38-4: Merge K-Sorted Elements | Part-2 //
    // 200922, Tuesday, 10.30 am
    #include <bits/stdc++.h>
    using namespace std;

    // type definitation
    typedef pair<int, int>PAIR;

    int main() {

        int k;
        cin>>k;

        // it is a 2D vector
        vector<vector<int>>allValues(k);

        // a vector to track the row of the vector i.e i'th of row of the allValues 2D vector
        vector<int>indexTracker(k, 0);

        // taking input of the 2D vector
        // i is the row i.e the k number of vector
        // TAKING INPUT OF THE 2D VECTOR
        for(int i=0; i<k; i++)  // i is taking the input of all the vector one by one
        {
            int size;  // size of i'th vector
            cin>>size;

            // denoting the size of i'th row vector as taken input in size
            allValues[i] = vector<int>(size);  // initialize the size of the i'th vector // the vectors are in row form

            // taking input of the column of the i'th row i.e i'th vector
            for(int k=0; k<size; k++)
            {
                cin>>allValues[i][k];
            }
        }

        // MIN PRIORITY QUEUE PAIR TYPE
        priority_queue<PAIR, vector<PAIR>, greater<PAIR>>pq;

        // pushing the i'th row's [0] index's value i.e i'th vector [0] index value initially to the pq to run the loop
        // and i (i as the marking of i'th vector)
        // PRIMARY INITIALIZATION OF PQ WITH i'th VECTOR'S [0]'TH VALUE AND I AS THE ROW/ the value came form which vector MARK
        for(int i=0; i<k; i++)
        {
            pq.push(make_pair(allValues[i][0], i));
        }

        vector<int>ans;

        // MAIN LOGIC OF THE CODE
        while(!pq.empty())
        {
            PAIR x = pq.top();
            pq.pop();

            // x.first is the value
            // x. second is the row / which vector marking


            // x.first is value, so, pushing the value in ans vector
            ans.push_back(x.first);

            if(indexTracker[x.second]+1 < allValues[x.second].size())
            {
                // here " (allValues[x.second][indexTracker[x.second]+1] "
                // (allValues[x.second]) this part is working as the row i'th row and
                // [indexTracker[x.second]+1 this part is working as the j'th colom
                // later x.second is the i'th row's marking
                // so, (allValues[x.second] ai row er [indexTracker[x.second]+1] ai column er value ta push hocche
                // and x.second row ta i'th array marking hisebe pair er second hisebe push hocche.
                pq.push(make_pair(allValues[x.second][indexTracker[x.second]+1], x.second));
            }
            // incrimenting the value of indexTracker[x.second]'th index with 1
            indexTracker[x.second]+=1;
        }

        // PRINTING THE ANSWER
        for(auto element: ans)
            cout<<element<<" ";

        /*

        3  = size of vector
        3 = size of vector's i'th row
        1 4 7 = elements of i'th row

        2
        3 5
        3
        2 6 7


        3
        3
        1 4 7
        2
        3 5
        3
        2 6 7


        */











        return 0;
    }

