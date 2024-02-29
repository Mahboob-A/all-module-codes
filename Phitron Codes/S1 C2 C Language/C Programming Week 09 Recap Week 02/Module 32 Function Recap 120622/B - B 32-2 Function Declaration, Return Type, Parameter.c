

        /// B - B 32-2 Function Declaration, Return Type, Parameter
        // 120622

    #include <stdio.h>
    int getArithmatic(int a, int b)
    {
        int calculation = a+b;
            calculation = calculation + 100;
            calculation = calculation - 50;
            calculation = calculation / 2;
            calculation = calculation * 3;

            return calculation;
    }
    int main () {
        int v, x, y, z;
        scanf("%d %d", &v, &x);
        scanf("%d %d", &y, &z);

        int callFunction = getArithmatic(v, x);
        printf("%d\n", callFunction);
        int callFunction2 = getArithmatic(y, z);
        printf("%d", callFunction2);
    }

