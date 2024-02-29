


            /// QS 7 Check Int Palindrm Stack
            // 030922, 11.00 am


    // practice day 02: week 07:

    #include <bits/stdc++.h>
    #include"MYSTACKGEN.h"
    #include" MYQUEUEGEN.h"
    using namespace std;

    void checkPalin(int num)
    {
        Stack<int>st;
        // copy num to n as we need to find rem of num two times
        int n=num;
        // find rem and push to Stack
        while(n>0)
        {
            int rem = n % 10;
            n = n / 10;
            st.push(rem);
        }

        // run loop until the Stack is empty and compare rem with the top of the Stack
        while(!st.empty())
        {
            int rem = num % 10;
            num = num / 10;
            int top = st.Top();
            if(top != rem)
                break;
            else
                st.pop();
        }

        // if the Stack is empty then palindrome else not palindrome
        if(st.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


        cout<<endl<<num<<endl;
    }


    int main() {
        /*
        Approach:
            1. We will mod the num and push the rem of the mod in the Stack (int rem = num % 10) and copy num to n as we need
               perform this twice
            2. Then we will remove the last digit by dividing the num by 10 (num = num / 10)
            3. We will run this loop until num > 0
            4. Now run loop while(!st.empty()) and again find rem of the num.
            5. Then get the top of the stack and compare if the top and the rem is equal.
            6. If not equal then break the loop else pop the top of the stack.
            7. At last chekc if the stack is empty, if so the num is palindrome else not palindrome.
        */


        int num;
        cin>>num;
        checkPalin(num);


        return 0;
    }

