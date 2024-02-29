


/// B - B 10 - 2 Linear Search

/// 10 - 2 is theory of linear search and 10 - 3 is code part of linear search of the module





///  B - B 10 - 2: Linear Search.
// 250722

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
cout<<"Linrar Search: All values of array are distinct: "<<endl<<endl;
cout<<"Input size of array: ";
int i, n, val;
cin>>n;
int ar[n];

cout<<"Input array value: "<<endl;
for (i=0; i<n; i++)
{
    cin>>ar[i];
}

cout<<"Input value to find: ";
cin>>val;
bool found = false;

for (i=0; i<n; i++)
{
    if (ar[i] == val)
    {
        found = true;
        cout<<"The value is found in index "<<i<<" ";
        break;
    }
}

if (!found)
{
    cout<<"Inputed value "<<val<<" has not found in the array."<<endl;
}


return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Linrar Search: All values of array has repeated elements: "<<endl<<endl;
    cout<<"Input size of array: ";
    int i, n, val;
    cin>>n;
    int ar[n];

    cout<<"Input array value: "<<endl;
    for (i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    char ch;
    cout<<"Do you want to search with repeated elements array: Y/N "<<endl;
    cin>>ch;

    while (toupper(ch) == 'Y')
    {

        cout<<"Input value to find: ";
        cin>>val;
        bool found = false;

        for (i=0; i<n; i++)
        {
            if (ar[i] == val)
            {
                found = true;
                cout<<"The value "<<val<<" is found in index "<<i<<" and position is "<<i+1<<endl;
            }
        }

        if (!found)
        {
            cout<<"Inputed value "<<val<<" has not found in the array."<<endl;
        }

        cout<<"Do you want to continue searching: Y/N "<<endl;
        cin>>ch;

    }

    return 0;
}




