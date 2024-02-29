
    /// practice day 02 --- 040822 thursday 2D array
    // qs 02  https://docs.google.com/document/d/1qzywabEiX9tWGaPVprxltnsA1AIkeJwuN20fm6-3LUA/edit
    #include <bits/stdc++.h>
    using namespace std;
    // WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B.
    //Now do C = A * B (multiplication). Finally display all the elements from matrix / 2D array C.

    int main() {

        FLAG:
        int i, j, arow, acol, brow, bcol;
        cout<<"Input row and colum size of matrix A: ";
        cin>>arow>>acol;
        int a[arow][acol];

        cout<<"Input elements in matrix A: \n";
        for (i=0; i<arow; i++)
        {
            for (j=0; j<acol; j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Input row and column size of matrix B: ";
        cin>>brow>>bcol;
        int b[brow][bcol];

        cout<<"Input elements in matrix B: \n";
        for (i=0; i<brow; i++)
        {
            for (j=0; j<bcol; j++)
            {
                cin>>b[i][j];
            }
        }

        if (acol != brow)
        {
            cout<<"Your both matrix must contain same number of row and columns";
            goto FLAG;
        }

        int c[arow][acol];
        int k, sum = 0;

        for (i=0; i<arow; i++)
        {
            for (j=0; j<bcol; j++)
            {
                for (k=0; k<brow; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }

        cout<<"Printing c[] = a[][] * b[][]\n";

        for (i=0; i<arow; i++)
        {
            for (j=0; j<acol; j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }



        return 0;
    }

