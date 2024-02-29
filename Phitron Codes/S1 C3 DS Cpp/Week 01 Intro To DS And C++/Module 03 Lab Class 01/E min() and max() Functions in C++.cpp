


            /// E min() and max() Functions in C++
            // 060722 11.10 am


    #include <iostream>
    using namespace std;

    int main () {
        //int a = 10, b = 20, c = 5, d = 50;

//        int min = 0;
//        if (a < b)
//        {
//            min = a;
//        }
//        else
//        {
//            min = b;
//        }

        // find min of multiple value

//        int mn = min(a, b);
//        int mn2 = min(mn, c);
//
//        // or in this way
//
//        int min3 = min(a, min(b, c));
//
//        // min of 4 values
//
//        int min4 = min(a, min(b, min(c, d)));
//
//        cout<<mn2<<endl;
//        cout<<min3<<endl;
//        cout<<min4<<endl;

          // min max of more than one var easy and difficult way

        int a = 10, b = 20, c = 5, d = 200, e = 40, f = 500, g = 2;

        int mn = min({a, b, c, d, e, f, g});  // easy way

        //int mn = min(a, min(b, min(c, min(d, min(e, min(f, g))))));  // same thing but in complex way

        //int mx = max(a, max(b, max(c, max(d, max(e, max(f, g))))));  // finding max in complex way

        int mx = max({a, b, c, d, e, f, g});  // finding max in easy way

        cout<<mn<<endl;

        cout<<mx<<endl;



          // finding min of an array using min() function


          int ar[]={2,8,9,1,5}, n = 5, i;

          int mn = ar[0];

          for (i=1; i<n; i++)
          {
              mn = min(mn, ar[i]);
          }

          cout<<mn<<endl<<endl;

          // finding max of an array using max() function

          int br[]={1,6,7,3,9}, k = 5, j;

          int mx = ar[0];

          for (j=1; j<k; j++)
          {
              mx = max(mx, br[j]);
          }

          cout<<mx<<endl;


        return 0;
    }
