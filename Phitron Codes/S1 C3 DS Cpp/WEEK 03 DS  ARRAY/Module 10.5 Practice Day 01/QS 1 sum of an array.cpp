





            /// QS 01: Sum Of An Array Elements

    /// Prctice Day 01 Week 03 Course 03 Sem 01.
    // 260722 10.30 am

    /// Question: 01 - WAP that will take n integer numbers into an array,
    //and then sum up all the integers in that array.

    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        // sum of an array

        int i, n, sum = 0;
        cout<<"\tSum of an Array Elements"<<endl<<endl;

        cout<<"Enter number of elements: ";
        cin>>n;

        int ar[n];
        cout<<"Enter the "<<n<<" elements: "<<endl;
        for (i=0; i<n; i++)
        {
            cin>>ar[i];
            sum += ar[i];
        }

        cout<<"The sum of "<<n<<" elements are "<<sum<<"."<<endl;

        return 0;
    }

