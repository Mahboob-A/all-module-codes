



    /// Given an integer N. Write a program to print all prime numbers between 1 and N.

    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int i, j, n;
        cin>>n;
        int count;
        for (i=2; i<=n; i++)
        {
            count = 0;
            for (j=2; j<=i/2; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    break;
                }

            }
            if (count == 0 && count != 1)
            {
                cout<<i<<" ";
            }
        }












        return 0;
    }
