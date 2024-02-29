

// 130123, Friday, 10.30 pm 
#include <bits/stdc++.h>
using namespace std;

const int N = 100;

int arr[N];

void fun()
{
        // memset(arr, -1, sizeof(arr));
        for(int i=0; i<N; i++)
        {
                arr[i] = INT_MAX;
        }
        arr[0] = 0;
}
int main() {


        fun();

        for(int i=0; i<N; i++)
        {
                cout<<arr[i]<<" ";
        }



        return 0;
}