


            /// D 4-4 Get by Row or Column from 2D Array
            // 150722 05.35 pm



    #include <iostream>
    using namespace std;

    int main () {



        int row, col, i, j;
        cout<<"Enter row and col: \n";
        cin>>row>>col;
        int ar[row][col];

        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                cin>>ar[i][j];
            }
        }

        // sum of specific column values

        /*
        cout<<"Enter col position to count sum: \n";

        int specific_col_pos;

        cin>>specific_col_pos;

        int sum = 0;

        for (i=0; i<row; i++)
        {
            //cout<<ar[i][specific_col_pos]<<" "
            sum += ar[i][specific_col_pos];
        }

        cout<<sum<<endl;

        */




        // sum of specific row values

        cout<<"Enter row position to count sum: \n";

        int specific_row_pos;

        cin>>specific_row_pos;

        int sum = 0;

        for (i=0; i<col; i++)
        {
            cout<<ar[specific_row_pos][i]<<" ";
            sum += ar[specific_row_pos][i];
        }

        cout<<endl;

        cout<<sum<<endl;





        return 0;
    }
