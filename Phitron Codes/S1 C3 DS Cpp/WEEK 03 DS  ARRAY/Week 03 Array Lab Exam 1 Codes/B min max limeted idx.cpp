
    #include <iostream>
    using namespace std;
    int getMn(int *ar, int I, int J)
    {
        int mn = 1000001;
        for (int i=I; i<=J; i++)
        {
            if (mn > ar[i]) mn = ar[i];
        }
        return mn;
    }

    int main() {
        int T, q, n, I, J;
        char line;
        cin>>T;
        //cin.ignore();
        //cin>>line;


        int count = 1;
        while(T--)
        {
            cin>>n>>q;
            int ar[n];

            for (int i=1; i<=n; i++)
            {
                cin>>ar[i];
            }

            cout<<"Case "<<count<<":"<<endl;


            while(q--)
            {
                cin>>I>>J;


                int mn = getMn(ar, I, J);

                cout<<mn<<endl;
            }
            count++;
        }
        return 0;
    }

