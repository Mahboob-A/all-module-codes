


            /// 27-4 Current MInimum Print  Part-2 CODE
            // 010922, Thursday, 11.00 am




        // 27-1 Balanced Parenthesis | easy code but other one is optimised as that has break to stop the loop
    #include <bits/stdc++.h>
    #include"MYSTACKGENMID.h"
    using namespace std;

    Stack<int>pushInArr(int *arr, int n)
    {
        Stack<int>st;
        for(int i=0; i<n; i++)
        {
            st.push(arr[i]);
        }
        return st;
    }

    void getMinAtPop(Stack<int>st, int *arr, int n)
    {

        Stack<int>min;
        int minimum = 99999;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<=minimum)
            {
                minimum = arr[i];
                min.push(minimum);
            }
        }

        while(!st.empty())
        {
            // if st.Top() and min.Top() aren't same then only pop st and print min.Top()
            if(st.Top() != min.Top())
            {
                cout<<min.Top()<<" ";
                st.pop();
            }

            // if st.Top() and min.Top() are same them cout min.Top() and pop both stack's Top()
            else
            {
                cout<<min.Top()<<" ";
                st.pop();
                min.pop();
            }
        }
    }


    int main() {

        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        // pushing arr elements in the stack
        Stack<int>myStack = pushInArr(arr, n);

        // calculating the min and popping accordingly with printing the Top of min
        getMinAtPop(myStack, arr, n);


        return 0;
    }
