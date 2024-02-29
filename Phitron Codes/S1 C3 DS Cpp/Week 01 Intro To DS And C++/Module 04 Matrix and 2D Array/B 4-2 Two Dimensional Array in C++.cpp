


            /// B 4-2 Two Dimensional Array in C++
            // 150722 04.20 pm


    #include <iostream>
    using namespace std;

    int main () {

        /*
        int i, j, row = 4, col = 4;

        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                cout<<i<<","<<j<<" ";
            }
            cout<<endl;
        }
        */


        int i, j, row = 4, col = 4;
        int ar[row][col];  // declared 2d array

        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                cin>>ar[i][j];
            }
        }

        cout<<"2D array output below: \n";

        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }


        return 0;
    }
