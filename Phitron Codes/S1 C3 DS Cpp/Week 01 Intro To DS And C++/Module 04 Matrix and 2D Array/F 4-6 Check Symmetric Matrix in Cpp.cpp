



            /// F 4-6 Check Symmetric Matrix in C++
            // 160722 10.00 am





    #include <iostream>

    using namespace std;

    int main() {
        int row, col, i, j;
        cin>>row>>col;
        int ar[row][col];
        if (row == col)   // checking if it's a square matrix cause if not then it cannot be diagonal, scalar or identity matrix
            cout<<"It's square matrix.\n";
        else
        {
            cout<<"It's not a square matrix.\n";
            return 0;
        }


        for (i=0; i<row; i++)  // taking input of the matrix
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
                if (ar[i][j] != ar[j][i]) // checking if x,y element is equal to y,x after reversing
                {
                    cout<<"It's not a symmetric matrix\n"; // if x,y is not equal to y,x after transposing then it's not symmetric matrix
                    return 0;
                }
            }
        }

        cout<<"It's a symmetric matrix\n";

        return 0;
    }
