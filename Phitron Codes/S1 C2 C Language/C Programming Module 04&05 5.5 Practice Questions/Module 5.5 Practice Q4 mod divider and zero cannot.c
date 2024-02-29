    #include <stdio.h>

    /// 20042022, wednesday, 18th Roja, evening, 04.30 p.m
/*
    আমরা একটা প্রোগ্রাম লিখেছিলাম যেটা a op b আকারের মান বের করতে পারে।
    ওটাকে এমনভাবে আপডেট কর যেন ওটা % অপারেটর এর জন্যও কাজ করে আর 0 দিয়ে ভাগ
    বা % করতে গেলে “Cannot divide by 0” print দেয়।
Example:

Input:

        5 * 15

Output:

        75


Input:

        3%2

Output:

        1


Input:

        5/0

Output:

        Cannot divide by 0.
*/

    /// calculator using switch case



    int main () {

        int num1, num2;
        char op;    // op = operation
        scanf ("%d %c %d", &num1, &op, &num2);

        switch (op) {
            case '+':
                printf("%d", num1 + num2);
                break;
            case '-':
                printf("%d", num1 - num2);
                break;
            case '*':
                printf("%d", num1 * num2);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Cannot divide by 0");
                }
                else {
                    printf("%d", num1 / num2);
                }
                break;
            case '%':
                if (num2 == 0) {
                    printf("Cannot divide by 0");
                }
                else {
                    printf("%d", num1 % num2);
                }
                break;



            }
            return 0;

    }



  /// calculator using if else if else statenent


  int main () {
      int num1, num2;
      char op;
      scanf("%d %c %d", &num1, &op, &num2);

      int result;

         if (op == '+') {
            printf("%d", num1 + num2);
         }
         else if (op == '-') {
            printf("%d", num1 - num2);
        }
        else if (op == '*') {
            printf("%d", num1 * num2);
        }
        else if (op == '/') {
               if (num2 == 0) {
                printf("Cannot divide by 0");
                return 0;
            }
               else {
                printf("%d", num1 / num2);
            }
        }
            else if (op == '%') {
                   if (num2 == 0) {
                    printf("Cannot divide by 0");
                    return 0;
            }
                else {
                    printf("%d", num1 % num2);
             }
        }



    return 0;
  }
