

/*

Logic building class 03
300323, Thursday, 09.00 am, 7th Roja.


*/


int main(){


    // float r;
    // cin>>r;
    // cout<<3.14 * r * r  <<endl;

    int a = 89274;
    cout << a % 10<<endl;
    a = a / 10;
    cout<<a<<endl;

    int b = 36523;
    int ans = 0;
    while(1)
    {
        int x = b % 10;
        ans += x;
        b = b / 10;
        if(b == 0) break;
    }

    cout<<"ans: "<<ans<<endl;

    float avg = (20 + 1 + 1) / 3.0;
    cout<<avg<<endl;

    cout<<5.0 / 2 << endl;

    return 0;

}

