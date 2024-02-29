
    #include <iostream>
    using namespace std;

    int main() {

        int a, b, c;
        cin>>a>>b>>c;


        if ((a != b ) && (a != c) && (b != c))
            cout<<3<<endl;

        if ((a==b) && (a != c))
            cout<<2<<endl;

        if ((a==c) && ( a != b))
            cout<<2<<endl;

        if ((a==b) && (a==c))
            cout<<1<<endl;

        if ((b==c) && (b != a))
            cout<<2<<endl;


        return 0;
    }
