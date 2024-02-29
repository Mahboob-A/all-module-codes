    /// 23-1 Generic Implementation of Stack using Template | Part 1
    // Mod date- 170822,Wednesday,  Watch date: 240822, Wednesday

    #include <bits/stdc++.h>
    #include"MYSTACKpr.h"
    using namespace std;

    int main() {

        Stack st;

        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);


        if(st.Top() != -1) cout<<"The Top element is: "<<st.Top()<<endl;         // 5

        cout<<"The popped element is: "<<st.pop()<<endl;  // 5

        if(st.Top() != -1) cout<<"The Top element is: "<<st.Top()<<endl;       // 4

        if (!st.empty()) cout<<"The Top element is: "<<st.Top()<<endl;

        cout<<"The size of the stack is: "<<st.size()<<endl;  // 4

        if (!st.empty()) cout<<"The stack is not empty"<<endl;  // true
        else cout<<"The stack is empty"<<endl;

        cout<<"The popped element is: "<<st.pop()<<endl;
        if(st.Top() != -1) cout<<"The Top element is: "<<st.Top()<<endl;

        while(!st.empty())
        {
            cout<<"The popped element is: "<<st.pop()<<endl;
        }

        if (!st.empty()) cout<<"The Top element is: "<<st.Top()<<endl;
        if (!st.empty()) cout<<"The stack is not empty"<<endl;  // true
        else cout<<"The stack is empty"<<endl;















        return 0;
    }
