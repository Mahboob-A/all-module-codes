

// 201222, Tuesday, 02.40 pm


    #include <bits/stdc++.h>
    using namespace std;

    void twoPointers(int *arr, int n, int x)
    {
        int i=0, j=n-1;
        while(i<j)
        {
            if(arr[i] + arr[j] == x)
            {
                cout<<"Found"<<endl;
                break;
            }
            else if(arr[i] + arr[j] < x)
                i++;
            else
                j--;
        }
    }


    void twoPointers2(int *arr, int n, int x)
    {
        int i=0, j=n-1;
        bool flag = true;
        while(i<j)
        {
            if(arr[i] + arr[j] == x)
            {
                cout<<"Found"<<endl;
                flag = false;
                break;
            }
            else if(arr[i] + arr[j] < x)
                i++;
            else
                j--;
        }
        if(flag)
            cout<<"Not Founddd"<<endl;
    }

    int main () {
        int arr[] = {2, 5, 1, 7, 5, 3, 8, 6, 7};
        int n = *(&arr + 1) - arr;
        int x = 71;
        sort(arr, arr+n);
        twoPointers(arr, n, x);
        cout<<endl;
        twoPointers2(arr, n, x);


    return 0;
    }
