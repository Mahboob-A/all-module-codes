// 201222, Tuesday, 10.00 pm
// Phitron 2nd day interview code
// print even numbers till n recursively


    #include <bits/stdc++.h>
    using namespace std;

    void printEvenNumbers(int begin, int end)
    {
        if(begin > end)
            return;
        if(begin % 2 == 0)
            cout<<begin<<" " ;

        printEvenNumbers(begin+1, end);

    }

    int main () {

        int n = 11;
        printEvenNumbers(1, n);


    return 0;
    }
