


            /// A 5-1 Class and Object in C++
            // 170722 10.00 am



    /** A simple class and object program**/

    #include <bits/stdc++.h>

    using namespace std;

    // class declaration
    class Student  // this is a clsss pretty much similar to struct in C but has advanced features
    {
    public:    // user need to tell the access modifier or specifier i.e the data_privacy
        char name[100];  // feature declaration same as struct
        int roll;
    };

    int main () {

        // object declaration same as var declaration in struct in C ( s1 is an object of Student class)
        Student s1;   // do not need to write class here as needed in struct in C
        strcpy(s1.name, "Mahboob Alam"); // data assingnment is similar to struct
        s1.roll = 50;

        cout<<"Student name is: "<<s1.name<<" and roll no is: "<<s1.roll<<endl;



        return 0;
    }
