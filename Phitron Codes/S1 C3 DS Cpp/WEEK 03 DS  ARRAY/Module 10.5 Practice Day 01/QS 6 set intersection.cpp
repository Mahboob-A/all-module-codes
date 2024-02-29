


            /// QS 6: set intersection

        // https://afteracademy.com/blog/find-the-intersection-of-two-unsorted-arrays

    /// Prctice Day 01 Week 03 Course 03 Sem 01.
    // 260722 4.30 pm

    /// Question: 6 - WAP that will take n integers into an array A and m positive integers
    // into array B. Now find the intersection (set operation) of arrays A and B.

    #include <bits/stdc++.h>
    using namespace std;

    int* input_arrs_intersection()
    {
        int i, j, n, m, ansCount = 0;
        cout<<"Enter number of elements of array A: ";
        cin>>m;
        int ar[m];
        cout<<"Enter the "<<m<<" elements: "<<endl;
        for (int i=0; i<m; i++)
            cin>>ar[i];

        cout<<"Enter number of elements of array B: ";
        cin>>n;
        int br[n];
        cout<<"Enter the "<<n<<" elements: "<<endl;
        for (int i=0; i<n; i++)
            cin>>br[i];

        int mx;
        n > m? mx = n : mx = m;
        int ans[mx];

        int k = 0;
        bool found = false;
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                if (ar[i] == br[j])
                {
                    found = true;
                    if (ar[i] != ans[k])
                    {
                        ans[k] = ar[i];
                        k++;
                        ansCount++;
                    }
                }
            }
        }

        if (!found)
        {
            cout<<"Empty set"<<endl;
        }
        else
        {
            for (i=0; i<ansCount; i++)    //?
            {
                cout<<ans[i]<<" ";
            }
        }

    }



    int main() {

        cout<<"\tIntersection (set operation) of Arrays A and B."<<endl<<endl;

        input_arrs_intersection();


        return 0;
    }
