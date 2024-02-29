


        /// E - E 32-5 Has Return + No Parameter
        // 120622

        // Function type 03:


    #include <stdio.h>
    int makeSum()  // int makeSum(void) thakle main er parameter e vul kore kono value diye dile program run ei hobe na
    {
        int a, b;  // as no parameter in the function, reading the value in the function itself
        scanf("%d %D", &a, &b);
        int sum = a + b;
        return sum;  // returning the result
    }
    int main () {

        int sum = makeSum(); // calling function without parameter
        printf("%d", sum);

    }
