


            /// F 2D Array.cpp
            //160722 05.00 pm




    #include <iostream>

    using namespace std;

    int main() {

        int i, j, n;
        cin>>n;
        int ar[n+1][n+1];

        for (i=1; i<=n; i++)
        {
            ar[1][i]=1;
            ar[i][1]=1;
        }

        for (i=2; i<=n; i++)
        {
            for (j=2; j<=n; j++)
            {
                ar[i][j] = ar[i-1][j] + ar[i][j-1];
            }
        }

        for (i=1; i<=n; i++)
        {
            for (j=1; j<=n; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl<<ar[n][n];


        return 0;
    }
