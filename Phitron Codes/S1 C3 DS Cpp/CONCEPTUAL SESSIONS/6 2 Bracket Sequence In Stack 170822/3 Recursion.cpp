



    // Conceptual Session 6 - 2: Recursion
    // 260822, Friday, 07.30 am

    /// Recursion
    #include <bits/stdc++.h>
    using namespace std;


    void printTriangle (int n)
    {
        /*
        if (n==0) return;
        cout<<n<<endl;
        fun(n-1);
        cout<<n<<endl;
        */
        if (n==1)
        {
            cout<<1<<endl;
            return;
        }


        // this below n value is reversed value n-1 i.e 5 4 3 2 1
        //cout<<n<<endl;
        for (int i=1; i<=n; i++)
        {
            cout<<n<<" ";
            //cout<<i<<" ";
        }
        cout<<endl;

        // as recursive call is stopped for the base case, now the function is returning the values from the
        // n-1 i.e from printTriangle(n-1) recursive call and the stack is now like this
        // 5
        // 4
        // 3
        // 2
        // 1
        // n==0

        printTriangle(n-1);


        // now the stack is returning the values from 0 to upward
        // hence the returned value of n after the recursive call is ended will be
        // from 0 to 1
        // from 1 to 2
        // from 2 to 3
        // from 3 to 4
        // from 4 to 5
        // and in this way value of n is changing until n-1 size and this continuous changing value is being printed in the for loop

        for (int i=1; i<=n; i++)
        {
            cout<<n<<" ";
            //cout<<i<<" ";
        }
        cout<<endl;


    }


    int main() {

        int n = 5;

        printTriangle(n);


































        return 0;
    }

