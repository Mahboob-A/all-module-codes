
    /// practice day 02 --- 040822 thursday 2D array
    // qs 01  https://docs.google.com/document/d/1qzywabEiX9tWGaPVprxltnsA1AIkeJwuN20fm6-3LUA/edit
    #include <bits/stdc++.h>
    using namespace std;


    // WAP that will take n integers into a sqrt(n) by sqrt(n) array (2D) and show them as traditional matrix view.

    int main() {


        // a value will be given and i have find the square root of it and make it row and col and input the array and output in traditional manner


        int n;
        cout<<"Input a value to and i will make a 2D out of its square root as row and col"<<endl;
        cin>>n;
        int sq = sqrt(n);

        int ar[sq][sq];

        int i, j;

        for (i=0; i<sq; i++)
        {
            for (j=0; j<sq; j++)
            {
                cin>>ar[i][j];
            }
        }

        cout<<"\n2D array in traditional manner: \n\n";

        for (i=0; i<sq; i++)
        {
            for (j=0; j<sq; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }


        return 0;
    }

