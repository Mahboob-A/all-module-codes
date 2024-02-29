
    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        int n, firstNum, midNum, lastNum;
        cin>>n;

        lastNum = n % 10;
        n = n / 10;
        midNum = n % 10;
        firstNum = n / 10;

        if (firstNum == lastNum)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

        return 0;
    }

