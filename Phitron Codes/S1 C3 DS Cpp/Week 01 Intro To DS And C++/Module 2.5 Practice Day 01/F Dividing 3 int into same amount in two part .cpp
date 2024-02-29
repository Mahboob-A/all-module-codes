

            /// F Dividing 3 int into same amount in two part


    #include <iostream>
    #include <algorithm>
    using namespace std;
    int main () {
        int a, b, c;
        cin>>a>>b>>c;
        int total = a+b+c;
        int mx = 0;

        //mx = max({a, b, c});
        if(a>b)
            mx = a;
        else if (b>c)
            mx = b;
        else
            mx = c;

        int rem_value = total - mx;

        if (rem_value == mx)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        return 0;
    }
