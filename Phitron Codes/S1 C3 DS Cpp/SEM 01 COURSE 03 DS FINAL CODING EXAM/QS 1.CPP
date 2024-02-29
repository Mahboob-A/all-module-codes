




            /// SEM 01 COURSE 03 CODING FINAL EXAM
            // QS 1
            // 280922, Wednesday, 08.30 am



    // Sem 01 Course 03 Final exam: QS 1
    #include <iostream>
    using namespace std;

    int main() {

        int t;
        cin>>t;
        while(t--)
        {
            int n;
            long long int c;
            cin>>n>>c;

            int arr[n];

            for(int i=0; i<n; i++)
            {
                cin>>arr[i];
            }

            int sum = 0;

            for(int i=0; i<n; i++)
            {
                sum += arr[i] * 2;
            }


            if(sum <= c)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }

        return 0;
    }
