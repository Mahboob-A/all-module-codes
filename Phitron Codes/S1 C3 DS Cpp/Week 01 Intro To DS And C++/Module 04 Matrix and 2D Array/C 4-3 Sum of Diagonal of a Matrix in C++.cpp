


            /// C 4-3 Sum of Diagonal of a Matrix in C++
            // 150722 05.20 pm

            // primary diagonal


    #include <iostream>
    using namespace std;

    int main () {
        int row, col, i, j;
        cin>>row>>col;
        int ar[row][col];
        int sum = 0;

        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                cin>>ar[i][j];
            }
        }


        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                if (i==j)
                {
                    sum += ar[i][j];
                }
            }
        }

        cout<<sum<<endl;


        return 0;
    }
