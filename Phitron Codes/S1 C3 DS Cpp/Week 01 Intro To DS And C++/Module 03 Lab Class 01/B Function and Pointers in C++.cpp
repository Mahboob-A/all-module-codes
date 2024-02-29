


            /// B Function and Pointers in C++
            // 060722 7.50 am



    #include <iostream>
    using namespace std;

    void change(int **x)
    {
        **x = 100;
    }

    int main () {
        int a = 10;
        int *p = &a;
        int **q = &p;

        change(q);
        cout<<a<<endl;


        return 0;
    }
