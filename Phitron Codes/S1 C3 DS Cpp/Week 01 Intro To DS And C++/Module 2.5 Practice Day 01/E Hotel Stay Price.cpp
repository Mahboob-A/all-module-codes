
        /// https://vjudge.net/contest/502905

            /// E Hotel Stay Price
            // 070722 8.30 am


    /*
    There is a hotel with the following accommodation fee:

XX yen (the currency of Japan) per night, for the first KK nights
YY yen per night, for the (K+1)(K+1)-th and subsequent nights
Tak is staying at this hotel for NN consecutive nights. Find his total accommodation fee.

Constraints
1 \leq N, K \leq 100001≤N,K≤10000
1 \leq Y < X \leq 100001≤Y<X≤10000
N,\,K,\,X,\,YN,K,X,Y are integers.

    */




    #include <iostream>
    using namespace std;
    int main () {
        int n, k, x, y;
        cin>>n>>k>>x>>y;

        int k_price = 0;
        int rem_days = 0;
        if (k>n)
        {
            k_price = x * n;
            rem_days = 0;
        }
        else
        {
            k_price = x * k;
            rem_days = n - k;
        }
        int k1_price = rem_days * y;
        int total_price = k_price + k1_price;

        cout<<total_price<<endl;


        return 0;
    }
