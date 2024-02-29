


            /// 23-1 Generic Implementation of Stack using Template | Part 1
            // 2408722, 04.00 pm


    #include <bits/stdc++.h>
    using namespace std;

    // making template
    template <typename T> T myFunction (T a, T b)
    {
        return (a>b) ? a : b;
    }

    int main () {

        cout<<myFunction<int>(2, 3)<<endl;
        cout<<myFunction<float>(5.6, 7.9)<<endl;
        cout<<myFunction<char>('a', 'z')<<endl;





        return 0;
    }
