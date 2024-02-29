
        /// Calculate Gcd Using Function

    #include <stdio.h>
        int calcGcd (int x, int y)
        {
            while (y>0)
            {
                int temp = x%y;
                x = y;
                y = temp;
            }
            int gcd = x;
            return gcd;
        }


    int main () {
        int a, b;
        scanf("%d %d", &a, &b);

        int g = calcGcd(a, b);

        printf("gcd is = %d", g);
    }
