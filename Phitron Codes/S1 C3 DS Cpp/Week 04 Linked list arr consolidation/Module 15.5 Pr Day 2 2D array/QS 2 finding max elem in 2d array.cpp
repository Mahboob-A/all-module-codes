
      /// practice day 02 --- 040822 thursday 2D array
    // qs 02  https://docs.google.com/document/d/1qzywabEiX9tWGaPVprxltnsA1AIkeJwuN20fm6-3LUA/edit

    #include <bits/stdc++.h>
    using namespace std;


    int main() {

        int i, j, row, col;
        cin>>row>>col;
        int ar[row][col];

        // taking input
        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                cin>>ar[i][j];
            }
        }

        cout<<endl;

        // printing the 2D array
        for (i=0; i<row; i++)
        {
            cout<<"Row: "<<i<<" [ ";
            for (j=0; j<col; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<"]"<<endl;
        }


        // program to find max
        int I, J;
        int mx = ar[0][0];  // taking the arr[0][0] element as max

        for (int i=0; i<row; i++)
        {
            for (int j=0; j<col; j++)
            {
                if (mx < ar[i][j])
                {
                    mx = ar[i][j];
                    I = i; // storing the indexes
                    J = j;
                }
            }
        }

        cout<<"Max: "<<mx<<endl;
        cout<<"Location: ["<<I<<"]"<<"["<<J<<"]"<<" ";

        return 0;
    }

