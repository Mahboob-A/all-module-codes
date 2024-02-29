


            /// B Loops in c++.cpp
            // 050722 10.30 pm


    #include <iostream>
    using namespace std;

    int main () {


        int i;
        // printing odd without condition
        for (i=1; i<=10; i=i+2)
        {
            cout<<i<<" ";
        }

        // printing even
        cout<<endl;

        for (i=2; i<=10; i+=2)
        {
            cout<<i<<" ";
        }
        cout<<endl;

        // printing odd in while loop

        int j = 1;
        while (j<=10)
        {
            cout<<j<<" ";
            j += 2;
        }

        cout<<endl;

        // printing even in while loop

        int k = 2;
        while (k<=10)
        {
            cout<<k<<" ";
            k = k+2;
        }

        cout<<endl;


        // sum of odd num

        int sum_odd = 0;
        int l;
        for (l=1; l<=10; l+=2)
        {
            sum_odd += l;
        }

        cout<<sum_odd<<endl;

        cout<<endl;

        // sum of even num

        int sum_even = 0;
        int x;
        for (x=2; x<=10; x+=2)
        {
            sum_even += x;
        }

        cout<<sum_even<<endl;
        return 0;
    }
