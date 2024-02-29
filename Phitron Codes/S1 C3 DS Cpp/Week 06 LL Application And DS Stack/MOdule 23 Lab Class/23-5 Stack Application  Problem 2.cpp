


            /// 23-5 Stack Application | Problem 2
            // 250822, 08.30 am


    /// reverse a stack || recursive
    /// 23-4 Stack Application | Problem 2

    #include <bits/stdc++.h>
    #include"MyStackTemplateHeader.h"
    using namespace std;

    void insertAtBottom(Stack <int> &st, int chkElement)
    {
        if (st.empty())
        {
            st.push(chkElement);
            return;
        }

        int topEle = st.Top();
        st.pop();
        insertAtBottom(st, chkElement);

        st.push(topEle);

    }

    void reverseStack(Stack <int> &chkStack)
    {
        if (chkStack.empty())
        {
            return;
        }

        int topElement = chkStack.Top();
        chkStack.pop();
        // recursice call
        reverseStack(chkStack);

        insertAtBottom(chkStack, topElement);




    }

    int main() {


        Stack <int> st;

        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);

        reverseStack(st);

        while(!st.empty())
        {
            cout<<st.Top()<<endl;
            st.pop();
        }

        return 0;
    }
