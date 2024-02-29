
    #include <iostream>
    using namespace std;

    void giveMoney(int *ar, int idx)
    {
        cout<<ar[idx]<<endl;
        ar[idx] = 0;
    }

    void addMoney(int *ar, int idx, int money)
    {
        ar[idx] += money;
    }

    void sumMoney(int *ar, int idxi, int idxj)
    {
        int sum = 0;
        for (int i=idxi; i<=idxj; i++)
        {
            sum += ar[i];
        }
        cout<<sum<<endl;
        // sum = 0;
    }

    int main() {

        int T;
        cin>>T;

        int count = 1;
        while(T--)
        {
            int i, n, q;
            cin>>n>>q;
            int ar[n];
            for (i=0; i<n; i++)
                cin>>ar[i];

            cout<<"Case "<<count<<":"<<endl;

            while(q--)
            {
                int ops;
                cin>>ops;
                if (ops == 1)
                {
                    int idx;
                    cin>>idx;
                    giveMoney(ar, idx);
                }
                if (ops == 2)
                {
                    int idx, money;
                    cin>>idx>>money;
                    addMoney(ar, idx, money);
                }
                if (ops == 3)
                {
                    int idxi, idxj;
                    cin>>idxi>>idxj;
                    sumMoney(ar, idxi, idxj);
                }
            }
            count++;
        }

        return 0;
    }
