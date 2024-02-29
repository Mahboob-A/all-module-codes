
// frequency array 201222, Tuesday, 12.20 pm


    #include <bits/stdc++.h>
    using namespace std;

    void printArr(int *arr, int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    void findFreq(int *arr, int n)
    {
        unordered_map<int, int>um;
        for(int i=0; i<n; i++)
        {
            um[arr[i]]++;
        }
        for(auto i: um)
        {
            cout<<i.first<<" " << i.second<<endl;
        }
    }

    void findFreq2(int *arr, int n)
    {
        map<int, int>mp;
        for(int i=0; i<n; i++)
            mp[arr[i]]++;

        for(auto i: mp)
            cout<<i.first<<" " << i.second<<endl;

    }


    void findFreqAdditionalArray(int *arr, int n)
    {
        int mx = *max_element(arr, arr+n);
        int count[mx+1];
        memset(count, 0, sizeof(count));
        for(int i=0; i<n; i++)
            count[arr[i]]++;

        for(int i=0; i<=mx; i++)
        {
            if(count[i] != 0)
                cout<<i<<" "<<count[i]<<endl;
        }

    }

    int main () {
        int arr[] = {1, 4, 3, 3, 3, 4, 4, 3, 5, 3, 5, 2, 4, 2, 5, 1, 5, 6, 7, 6};
        int n = sizeof(arr) / sizeof(arr[0]);

        //findFreq2(arr, n);

        findFreqAdditionalArray(arr, n);

        printArr(arr, n);



    return 0;
    }
