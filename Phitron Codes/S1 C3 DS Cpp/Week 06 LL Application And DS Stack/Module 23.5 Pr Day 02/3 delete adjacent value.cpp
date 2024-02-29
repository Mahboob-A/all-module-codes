


        /// 3. delete adjacent arr value


    // week 06 pr day 02
    // 260822, 9.30 pm
    /// 3. delete arr by k times if arr[i] < arr[i+1]

    // this code has lil bug. if the input is 3 100 1 and k is 1 then the output should come is 100 1 but now the code produces
    // o/p 100. fix this bug

    #include <bits/stdc++.h>
    using namespace std;

    int deleteArr(int *arr, int n, int pos)
    {
        int count = 0;
        if (pos==n-1)
        {
            n--;
            count++;
        }
        else
        {
            for (int i=pos+1; i<n; i++)
            {
                arr[i-1] = arr[i];
            }
            n--;
            count++;
        }
        return count;
    }

    int deleteArrAdjacent(int *arr, int n, int k)
    {
        if (k < 0 || k > n)
        {
            cout<<"Invalid number of deletion "<<endl;
            return n;
        }
        int res = 0;
        int pos = 0;
        for (int i=0; i<k; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (arr[j] < arr[j+1])
                {
                    //cout<<arr[i]<<endl;
                    pos = j;
                    //cout<<pos<<" ."<<endl;
                    res = deleteArr(arr, n, pos);
                    break;
                }
            }
        }
        return res;
    }

    int main() {

        int n, k;
        cout<<"Enter array size: ";

        cin>>n;
        int arr[n];

        cout<<"Input Array elements: "<<endl;
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        cout<<"Enter num of times to delete Array [k]: ";
        cin>>k;

        int res = deleteArrAdjacent(arr, n, k);
        int s = (n-1) - res;
        cout<<res<<endl;

        for (int i=0; i<s; i++)
        {
            cout<<arr[i]<<" ";
        }
























        return 0;
    }
