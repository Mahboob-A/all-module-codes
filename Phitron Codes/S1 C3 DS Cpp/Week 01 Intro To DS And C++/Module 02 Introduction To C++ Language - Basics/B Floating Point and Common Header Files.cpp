


            /// B Floating Point and Common Header Files
            // 050722 8.10 am


    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main () {
        float a = 10.987492;
        //printf("%.5lf", a);

        cout<<fixed<<setprecision(5)<<a<<endl;  // ai vabeo dosomik er por icche moto ghor peint kora jai but ai command er jonno iomanip header file use korte hoy

        //cout<<a<<endl;

        // printing of char and char type array or string in c++

        char b = 'a';
        cout<<b<<endl;

        char c[5] = "Hi";
        cout<<c<<endl;

        // string print in c style

        char d[5] = "ok";
        printf("%s\n", d);

        return 0;
    }
