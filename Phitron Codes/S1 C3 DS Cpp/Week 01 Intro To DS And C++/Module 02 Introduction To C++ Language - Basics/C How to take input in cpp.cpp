


            /// C How to take input in cpp
            // 12.10 pm


    #include <iostream>
    using namespace std;

    int main () {


        // akadhik var input
        /*
        int a, b, c;
        cin>>a>>b>>c;
        cout<<a<<" "<<b<<" "<<c<<endl;
        */

        // string input in cpp

        char str[50];

        cin.getline(str, 50);

        cout<<str<<endl;

        // array input in cpp

        int i;
        int ar[5];

        for (i=0; i<5; i++)
        {
            cin>>ar[i];
        }

        for (i=0; i<5; i++)
        {
            cout<<ar[i]<<" "<<endl;
        }



        return 0;
    }
