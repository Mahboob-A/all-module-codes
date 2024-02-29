


            /// 2 Sort A Stack
            // 260822, 5.30 pm

        /// sort a stack

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



        // function to insert at sorted order
        void sortedInsert(Stack<int>&st, int val)
        {
            // base case
            // the condition is we need to find the smaller element in the stack than the val, if we find any element
            // that is smaller than the our val, then we will push the val there and if no element is not found in
            // the stack that is smaller than the val, then the stack might be empty because we will be check each
            // element by popping, so, if the stack becomes empty, then val is the smallest element amongst the elements
            // in the stack. So, in the case of empty also, we will push the val in the stack

            // base case
            if (st.empty() || st.Top() < val)
            {
                st.push(val);
                return;
            }

            // now take each element of the stack and pop it and call recursive call
            int num = st.Top();
            st.pop();

            // recursive call
            sortedInsert(st, val);

            // now as the recursive call returns the value, just push the returned values that were stored in num var
            st.push(num);

        }


        // function to make the stack empty and call the sortedInsert function
        void sortStack(Stack<int>&st)
        {
            // at first, empty the stack using recursion
            // base case
            if (st.empty())
            {
                return;
            }

            // take the Top element of the stack and pop, then call the recursive call
            int val = st.Top();
            st.pop();

            // recursive call
            sortStack(st);

            // now as the stack is now empty, now call another function to insert in sorted order in the stack
            sortedInsert(st, val);


        }



        int main () {

            cout<<"Input size of the stack: ";
            int n, val;
            cin>>n;

            Stack<int>st;

            cout<<"Input the elements: "<<endl;
            for(int i=0; i<n; i++)
            {
                cin>>val;
                st.push(val);
            }


            // calling function to sort
            sortStack(st);

            // function to reverse the stack
            revStack(st);

            // printing
            cout<<"The sorted and reversed stack is: "<<endl;
            while (!st.empty())
            {
                cout<<st.Top()<<endl;
                st.pop();
            }




        return 0;
        }
