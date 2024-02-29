


            /// 22 2 220822, Monday


    /// stack with array

    #include <bits/stdc++.h>
    using namespace std;


    #define size 3
    int arr[size];
    int top = -1;

    // function to push in stach
    void push(int val)
    {
        if (top == size - 1)
        {
            cout<<"The stack if full"<<endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    // function to pop in stack
    void pop(void)
    {
        if (top == -1)
        {
            cout<<"The stack is empty"<<endl;
        }
        else
        {
            cout<<"The element deleted: "<<arr[top]<<endl;
            top--;
        }
    }

    void peek(void)
    {
        if (top != size -1 || top != -1)
        {
            cout<<arr[top]<<endl;
        }
    }

    int main() {
        int arr[100];

        int n, i, val;
        cin>>n;
        for (i=0; i<n; i++)
        {
            cin>>val;
            push(val);
        }
        //cin>>val;
        //push(val);

        pop();
        peek();
        pop();
        pop();
        pop();



        return 0;
    }
