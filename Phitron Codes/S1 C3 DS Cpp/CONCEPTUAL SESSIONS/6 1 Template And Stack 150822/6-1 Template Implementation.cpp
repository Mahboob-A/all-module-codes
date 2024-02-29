


            /// 6-1 Template & Stack implemantation
            // 150522, (250822, 04.00 pm)




    #include <bits/stdc++.h>
    using namespace std;


    // a generic template for making sum parameter and returned data type is same
    template <typename T>
    T makeSum(T a, T b)
    {
        T ans = a + b;

        return ans;
    }

    // a generic template for making sum and multiple sum with a decimal value where parameter and returned values are different
    template <typename T1, typename T2>
    T2 makeSumReturnDiffAns(T1 a, T1 b)
    {
        // a different data type will be passed in the parameter and double or float type answer will be returned
        T2 ans = (a+b) * 3.78;

        return ans;
    }
    int main() {

        int a = 10, b = 20;
        int ans = makeSum<int>(a, b);

        cout<<ans<<endl;


        int x = 30, y = 60;
        // as double type ans is being returned, and int type value is being passed, hence at first i am
        // specifying the parameter data type and then the returned data type in <> <- bracket
        double ans2 = makeSumReturnDiffAns<int, double>(x, y);

        cout<<ans2<<endl;

        return 0;
    }
