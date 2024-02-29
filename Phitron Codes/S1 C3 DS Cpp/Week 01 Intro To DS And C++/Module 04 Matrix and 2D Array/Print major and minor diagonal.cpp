
    // week 04: Practice day 01 : Question 2: Print Major and Minor Diagonal of a matrix

    #include <bits/stdc++.h>
    using namespace std;


    int main() {
        int i, j, row, col;
        cout<<"Input Row and Column: ";
        cin>>row>>col;
        int ar[row][col] = {0};

        if (row == col)
        {
            cout<<"\nInput Array Elements: \n";
            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    cin>>ar[i][j];
                }
            }

            cout<<"Array Printing: \n";
            cout<<"Major Diagonal: ";
            for (i=0; i<row; i++)
            {
                cout<<ar[i][i]<<" ";
            }

            cout<<endl;

            cout<<"Minor Diagonal: ";
            for (i=0; i<row; i++)
            {
                cout<<ar[i][row-i-1]<<" ";
            }
        }
        else
        {
            cout<<"The array is not a square matrix\n";
        }




        return 0;
    }

