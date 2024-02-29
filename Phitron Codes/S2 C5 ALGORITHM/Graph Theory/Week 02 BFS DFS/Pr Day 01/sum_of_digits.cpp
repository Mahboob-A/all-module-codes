// algo 
// gt, bfs, practice day 01 
// QS 05: sum of digits 
// mod date: 191222, Sunday 
// practice date: 241222, Saturday, 10.00 pm 

#include <bits/stdc++.h>
using namespace std;

void getSumOfDigits(int n)
{
        int sum = 0;
        int i = 0;
        while(n != 0)
        {
                //int last = n%10;
                // sum += last;

                sum += n%10;
                n = n / 10;
                
        }
        cout<<sum<<endl;

}

int main() {

        int n; 
        cin>> n;
        getSumOfDigits(n);

        return 0;
}