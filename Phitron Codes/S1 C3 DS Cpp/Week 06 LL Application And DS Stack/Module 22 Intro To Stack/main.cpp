


            /// main file for using my user defined MYSTACK.h header fie
            // 230822, Tuesday, 11.00 am


    #include <iostream>
    #include"MYSTACK.h"    // including my header file of stack
    using namespace std;

    int main () {


        Stack st;    // created a Stack type instance

        // pushing element in stack
        st.push(1);
        st.push(2);
        st.push(3);

        // if we need to pop all elements
        //while(!st.is_empty())       // it means as is_empty returns false if stack is not empty, then until st.is_empty() is true that is !st.is_empty() =-> pop() and it will pop the all elements and print
        //{
            //cout<<st.pop()<<endl;
        //}


        // printing the size of the stack
        cout<<"Size of the stack is: "<<st.size()<<endl;

        // seeing the top element of the stack: method 01: checking if st.peak() returned != -1 and then print. IF -1, we are printing it in our header file of MYSTACK.h
        if (st.peak() != -1)  // it returns -1 if head == NULL
        {
            cout<<"Top element of the stack is: "<<st.peak()<<endl;
        }

        // popping another element:
        cout<<"The popped element is: "<<st.pop()<<endl;

        // again printing the size of the stack
        cout<<"Size of the stack is: "<<st.size()<<endl;

        // another way of seeing the top element if st.is_empry not true then there is element in the stack
        // if st.is_empty() not true then call st.peak() as if is_empty() returns true if the stack is empty so if false then it not empty and is_empty in normal means true so we need !true here only then call st.peak function
        if (!st.is_empty())
        {
            cout<<"Top element of the stack is: "<<st.peak()<<endl;
        }


        // checking if the stack is empty or not
        if (!st.is_empty())
        {
            cout<<"The stack is not empty"<<endl;
        }
        else
            cout<<"The stack is empty"<<endl;





        return 0;
    }
