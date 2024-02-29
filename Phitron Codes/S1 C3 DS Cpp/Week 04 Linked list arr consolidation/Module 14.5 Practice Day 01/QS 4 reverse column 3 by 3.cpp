
    // week 04: 020822 Practice day 01 : Question 4:  WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse that matrix within itself and display it. The reversal means swapping the 1st column with the nth column, the 2nd column with the (n-1)th column, and so on…

    // reverse column for 3 x 3

    #include <bits/stdc++.h>
    using namespace std;


    int main() {
        int i, j, row, col;
        cout<<"Input Row and Column: ";
        cin>>row>>col;
        int ar[row][col] = {0};

        cout<<"\vInput Array Elements: \n";
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                cin>>ar[i][j];
            }
        }

        cout<<"\nArray printing: \n";
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }

        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                int tmp = ar[i][0];
                ar[i][0] = ar[i][j];
                ar[i][j] = tmp;
            }
        }

        cout<<"\n\nArray printing After Reversing the Column: \n";
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



