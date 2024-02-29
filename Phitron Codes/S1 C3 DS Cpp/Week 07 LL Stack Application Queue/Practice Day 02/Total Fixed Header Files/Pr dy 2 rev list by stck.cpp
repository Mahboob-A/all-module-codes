


        /// pr day 02 week 07 question:
        // rev a list using stack


    // practice day 02: week 07:
    // QS: Reverse A List Using Stack
    #include <bits/stdc++.h>
    #include"MYLIST.h"   // for Linked List
    #include"MYSTACKGEN.h"  // for Stack
    #include"MYQUEUEGEN.h"  // for Queue
    using namespace std;

    void revListUsingStack()
    {
        // declaring two lint and queue objects
        dLinkedList<int>list;
        Stack<int>st;

        int i, n;
        cin>>n;
        // taking input and inserting both - in list and in stack
        for(i=0; i<n; i++)
        {
            int val;
            cin>>val;
            list.insertAtTail(val);
            st.push(val);
        }

        // deleting the previous elements of list
        int size = list.size();
        while(size--)
        {
            list.delAtTail();
        }

        // inserting back into the list from the stack
        while(!st.empty())
        {
            int val = st.Top();
            list.insertAtTail(val);
            st.pop();
        }

        cout<<"The reversed list is: "<<endl;
        list.printList();
    }


    int main() {

        revListUsingStack();


        return 0;
    }
