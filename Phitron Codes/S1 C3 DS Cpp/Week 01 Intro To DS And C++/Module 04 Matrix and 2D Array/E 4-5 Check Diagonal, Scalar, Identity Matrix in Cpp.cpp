


            /// E 4-5 Check Diagonal, Scalar, Identity Matrix in C++
            // 160722 07.20 am


            /// check if it's a diagonal, scalar and identity matrix (all values are zero except diagonal values, diagonal vlaues are same, diagonal values are 1)


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

        // checking if it's a diagonal matrix. diagonal matrix is which has zero values to other cells except it's diagonal
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                if (i == j)   // ignoring the diagonal values as i==j are the diagonal values
                {
                    continue;
                }
                if (ar[i][j]>0)  // if other cells are greater than zero, then it's not a diagonal matrix
                {
                    cout<<"Not Diagonal Matrix\n";
                    return 0;
                }

            }
        }
        cout<<"It's a Diagonal matrix\n";

        // scalar matrix is a doagonal matrix whose doagonal values are same
        // identity matrix is scalar matrix whose diagonal values are 1

        // checking if the diagonal matrix is scalar and identity matrix
        int save = 0;  // a variable to store the first diagonal value i.e 0,0 th value to check if 0,0 th value is same to other doagonal cells
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                if (i==j)  // checking only to the diagonal cells
                {
                    if (i==0 && j==0) save = ar[i][j]; // saving the 0,0 th value to save variable
                    else  // i==j index but not the 0,0 position now
                    {
                        if (save != ar[i][j])  // if other doagonal cells are not equal to 0,0 th value
                        {
                            cout<<"It's not a Scalar matrix\n";   // then it's not a scalar matrix
                            return 0;
                        }
                    }
                }
            }
        }
        if (save == 1) // if diagonal value is 1 then it's a scalar and identity matrix
        {
            cout<<"it's a Scalar and Identity matrix\n";
        }
        else
        {
            cout<<"It's a Scalar matrix\n";  // else it's only a scalar matrix
        }

        return 0;
    }
