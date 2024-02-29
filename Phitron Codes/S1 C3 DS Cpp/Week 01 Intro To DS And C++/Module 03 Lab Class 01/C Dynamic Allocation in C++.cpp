


            /// C Dynamic Allocation in C++
            // 060722 9.00 am


    #include <iostream>
    using namespace std;

    int main () {
        int i, n;
        cin>>n;

        int *ar = new int[n];   // dma style in cpp. NEW keyword in used to dma array in cpp.

        for (i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        for (i=0; i<n; i++)
        {
            cout<<ar[i]<<" ";
        }

        cout<<endl;

        double *dr = new double[10]{2.5, 0.4, 8.3, 7.2};   // cpp is capable of direct initialization of dma array

        for (i=0; i<10; i++)
        {
            cout<<dr[i]<<" ";
        }

        delete ar;
        delete dr;

        return 0;
    }
