

        /// Program to find sum of integers
        // 01.06.22


        // included in Module 21 , time 1.00 min

    #include <stdio.h>
    int sumOfDigit (int x)
    {
        int sum = 0;
        while (x)
        {
            int digit = x % 10;  // finding last digit
            x /= 10;            // removing last digit
            sum += digit;
        }
        return sum;
    }
    int main () {
        int digitSum = sumOfDigit(123456789); // calling function
        printf ("%d", digitSum);
    }

