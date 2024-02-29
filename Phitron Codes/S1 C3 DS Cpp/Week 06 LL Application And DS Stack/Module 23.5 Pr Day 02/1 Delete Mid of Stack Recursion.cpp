

    // week 06 pr day 02
    // 260822, 2.30 pm
    /// Delete Middle Of A Stack Recursive Method
    #include <bits/stdc++.h>
    #include"MyStackHeaderGeneric.h"
    using namespace std;

    // function to insert at bottom of a stack after reverse stack function
    void insertAtBottom(Stack <int>&st, int topElement)
    {
        if (st.empty())
        {
            st.push(topElement);
            return;
        }

        int topEle = st.Top();
        st.pop();
        insertAtBottom(st, topElement);

        st.push(topEle);
    }


    // function to reverse a stack
    void revStack(Stack<int>&st)
    {
        if (st.empty())
        {
            return;
        }

        int topElement = st.Top();
        st.pop();
        revStack(st);

        insertAtBottom(st, topElement);

    }

    // sub function to Delete mid
    void delStackMid(Stack<int> &st, int size, int count)
    {
        // base case

        if (count == size/2)
        {
            st.pop();
            return;
        }

        cout<<"Mid: "<<(size/2)<<endl;

        // take the top element and pop it
        int topEle = st.Top();
        st.pop();

        // call the function recursively
        delStackMid(st, size, count+1);

        // after the recursive call is finished, put back al the elements to the stack
        st.push(topEle);
    }

    //function to Delete mid
    void deleteMiddle(Stack<int> &st, int size)
    {
        // call delStackMid function to perform the action
        // take a count to note the top element
        int count = 0;

        delStackMid(st, size, count);
    }

    int main() {

        Stack<int>st;


        int n, val;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>val;
            st.push(val);
        }


        /*
        st.push(1);
        st.push(2);
        st.push(10);
        st.push(5);
        */

        cout<<st.size()<<endl;

        deleteMiddle(st, st.size());

        // calling function to reverse the stack to rearrange the elements from assending order
        revStack(st);
        cout<<"The stack after the mid element deleted is: "<<endl;

        while (!st.empty())
        {
            int p = st.Top();
            st.pop();
            cout<<p<<" ";
        }



        return 0;
    }
