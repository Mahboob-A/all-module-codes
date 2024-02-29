


            /// Delete Mid Element Of A Stack
            // 020922, friday

    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;

    void delMidOfStack(Stack<int>&st)
    {
        // taking a tmp stack to store original Stack's before mid elements
        Stack<int>tmp;
        // taking the mid
        int mid = st.Mid();

        // running loop before the mid
        for(int i=1; i<mid; i++)
        {
            int val = st.Top();
            tmp.push(val);
            st.pop();
        }

        // as the loop jsut sttopped before the mid element, now just pop the mid element manually
        st.pop();

        // now again pop the tmp stack and put back all elements in the original stack
        while(!tmp.empty())
        {
            int val = tmp.Top();
            st.push(val);
            tmp.pop();
        }
    }


    int main() {

        Stack <int> st;

        int i, val, n;
        cout<<"Input stack size and then elements: ";
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>val;
            st.push(val);
        }
        cout<<"Mid element is: ";
        cout<<st.Mid()<<endl;

        // calling function to delete mid element
        delMidOfStack(st);
        while(!st.empty())
        {
            cout<<st.pop()<<endl;
        }



        return 0;
    }


    /// same code but in recursive way
    /*
    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;

    void delMid(Stack<int>&st, int size, int count)
    {
        // base case
        // if count and size/2 is same then pop that element and return from the recursive call
        if(count == size/2)
        {
            st.pop();
            return;
        }

        // make recursive call, pop the top element, incriment count
        int val = st.Top();
        st.pop();
        delMid(st, size, count+1);

        // after the recursive function exits, push back those leftover values pop before the calling recursive call
        st.push(val);

    }

    void delMidOfStack(Stack<int>&st)
    {
        int size = st.size();
        int count = 0;
        delMid(st, size, count);

    }


    int main() {

        Stack <int> st;

        int i, val, n;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>val;
            st.push(val);
        }

        // calling function to delete mid element
        delMidOfStack(st);
        cout<<endl<<endl;
        while(!st.empty())
        {
            cout<<st.pop()<<endl;
        }



        return 0;
    }


    */



    /// same code but without taking header file's mid
    /// by taking size / 2 variable


    /*
    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;

    void delMidOfStack(Stack<int>&st)
    {
        // taking a tmp stack to store original Stack's before mid elements
        Stack<int>tmp;

        int size = st.size();
        int mid = size / 2;
        cout<<mid<<endl;

        // running loop before the mid
        for(int i=1; i<=mid; i++)
        {
            int val = st.Top();
            tmp.push(val);
            st.pop();
        }

        // as the loop jsut sttopped before the mid element, now just pop the mid element manually
        cout<<endl<<st.pop()<<endl;

        // now again pop the tmp stack and put back all elements in the original stack
        while(!tmp.empty())
        {
            int val = tmp.Top();
            st.push(val);
            tmp.pop();
        }
    }


    int main() {

        Stack <int> st;

        int i, val, n;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>val;
            st.push(val);
        }

        // calling function to delete mid element
        delMidOfStack(st);
        while(!st.empty())
        {
            cout<<st.pop()<<endl;
        }



        return 0;
    }

    */
