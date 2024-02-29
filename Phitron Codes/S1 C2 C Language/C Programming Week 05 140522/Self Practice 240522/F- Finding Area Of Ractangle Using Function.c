
        /// Finding Area Of Rectangle Using Function

    #include <stdio.h>
        double calcRectangleArea (double x, double y)
        {
            double area = x * y;

            return area;
        }

    int main () {
        double a, b;
        scanf("%lf %lf", &a, &b);

        double area = calcRectangleArea (a, b);
        printf("The area of the rectangle is: %lf", area);

    }
