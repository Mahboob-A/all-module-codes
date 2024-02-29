


            /// QS 5 Make Dupes -1
            // 270822, DS WEEK 06 LAB EXAM MID TERM


    /// Week 06: Lab Mid Term Exam: Question 04: Print unique value's only the first occurance of and make dupes as -1 and print the matrix
    // 270822, Saturday
    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        /*
 Approach:
 1. We need to print all elements only once and if it has any dupes in the array, then make the dupe as -1 and print it.

2. So, take a freq array with the size of largest element+1 in the array and set 0 to freq array.

3. Access the 2D array as usual by row and col, and in the inner loop, check if the frequency of
arr[i][j] is 0 then it is appearing first time in the freq array, hence simply print it and count it in freq array.

4. Now the case is for those elements that are already printed or appeared in the freq array, in this case in the else part make the part make arr[i][j] = -1 and print arr[i][j].
// seek support if this problem could be solved without taking the additional freq array after exam. //
*/



        int i, j, row, col, mx;
        mx = -1;
        cin>>row>>col;

        int arr[row][col];
        for (i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cin>>arr[i][j];
                if (mx < arr[i][j])
                {
                    mx = arr[i][j];
                }
            }
        }

        int freq[mx+1];
        memset(freq, 0, sizeof(freq));

        for (i=0; i<row; i++)
        {
            for (j=0; j<col; j++)
            {
                int val = arr[i][j];
                if (freq[val] == 0)
                {
                    cout<<arr[i][j]<<" ";
                    freq[val]++;
                }
                else
                {
                    arr[i][j] = -1;
                    cout<<arr[i][j]<<" ";
                }
            }
            cout<<endl;
        }


        return 0;
    }

