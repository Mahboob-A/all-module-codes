


            /// QS 1 Sum OF Pattern of 2D array
            // 270822, DS WEEK 06 LAB EXAM MID TERM



    /// Week 06: Lab Mid Term Exam: Question 05: 2D Array: Find Sum Of Particular Pattern
    // 270822, Saturday
    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        int i, j, n;

        cin>>n;

        int arr[n][n];
        for (i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }

        int sum = 0;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if(i == n/2)
                {
                    sum+=arr[i][j];
                }

                if(j == n/2 && i != j)
                {
                    sum+=arr[i][j];
                }

                if(i == 0 && j < n/2)
                {
                    sum+=arr[i][j];
                }

                if(j == n-1 && i < n/2)
                {
                    sum+=arr[i][j];
                }

                if(i > n/2 && j == 0)
                {
                    sum+=arr[i][j];
                }

                if(i == n-1 && j > n/2)
                {
                    sum+=arr[i][j];
                }
            }
        }

        cout<<sum<<endl;

        return 0;
    }
