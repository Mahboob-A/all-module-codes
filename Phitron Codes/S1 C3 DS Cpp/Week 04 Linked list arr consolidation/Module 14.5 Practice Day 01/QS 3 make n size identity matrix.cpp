
    // week 04: Practice day 01 : Question 3: Make n sized identity matrix primary diagonal 1 else all 0

    #include <bits/stdc++.h>
    using namespace std;


    int main() {
        int i, j, size;
        cout<<"Input Size: ";
        cin>>size;
        int ar[size][size] = {0};

        cout<<"\vInput Array Elements: \n";
        for (i=0; i<size; i++)
        {
            for (j=0; j<size; j++)
            {
                if (i==i)
                {
                    ar[i][j] = 0;
                }
            }
        }




        for (i=0; i<size; i++)
        {
            for (j=0; j<size; j++)
            {
                if (i==j)
                {
                    ar[i][i] = 1;
                }
            }
        }


        // printing
        for (i=0; i<size; i++)
        {
            for (j=0; j<size; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }





        return 0;
    }
