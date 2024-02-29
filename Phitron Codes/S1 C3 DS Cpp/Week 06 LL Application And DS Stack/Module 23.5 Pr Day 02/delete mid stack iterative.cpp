


            /// 1. delete mid element of stack iterative method



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

    void deleteMiddle(Stack <int> &st, int size)
    {
        // take a count var to drive the mid
        int count = 0;

        // create a tmp stack
        Stack<int>tmpSt;

        // iterate previous element of size/2
        // and insert all the elements in the tmpSt and pop original st
        while(count < size/2)
        {
            int val = st.Top();
            st.pop();
            tmpSt.push(val);
            count++;
        }

        // as loop ended before the mid element and stack is now at the mid element
        // hence pop the mid
        st.pop();

        // now as the mid element is deleted, again push the rest half
        // of st that is stored in tmpSt beck to original Stack
        while (!tmpSt.empty())
        {
            int val = tmpSt.Top();
            tmpSt.pop();
            st.push(val);
        }



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
