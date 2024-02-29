


            /// D Swap( ) function in C++
            // 050722 10.40 am


    #include <iostream>
    using namespace std;

    int main () {
        int a = 10, b = 20;

        int tmp = a;
            a = b;
            b = tmp;

        cout<<a<<endl<<b<<endl;



        int i, j;

        int ar[] = {3,9,7,6,4,8,2,9}, n = 8;

        for (i=0; i<n-1; i++)
        {
            for (j=i+1; j<n; j++)
            {
                if (ar[i] > ar[j])
                {
                    swap(ar[i], ar[j]);
                }

            }
        }


        for (i=0; i<n; i++)
        {
            cout<<ar[i]<<" ";
        }


        return 0;
    }
