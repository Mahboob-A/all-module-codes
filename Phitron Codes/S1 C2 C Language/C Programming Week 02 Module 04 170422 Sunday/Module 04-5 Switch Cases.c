    #include <stdio.h>
/// calculator using if elseif else condition



    int main () {

         int num1, num2;
         char op;
         scanf("%d %c  %d",  &num1, &op, &num2);

         int result;

         if (op ==  '+' ) {
			result = num1 + num2;
         }
         else if (op ==  '-' ) {
			result = num1 - num2;
         }
         else if (op ==  '*' ) {
			result = num1 * num2;
         }
         else if (op ==  '/' ) {
                if (num2 == 0){
                    printf("Cannot divide by 0");
                    return 0;
                }
                else {
                    result = num1 / num2;
                }
         }
         else if (op == '%'){
                if (num2 == 0) {
                    printf("Cannot divide by %d", num2);
                    return 0;
                }
                else {
                    result = num1 % num2;
                }
         }

         printf("%d", result);

    }

/*

            /// calculator using switch  case

        int main () {

		  int num1, num2;
		  char op;
		  scanf("%d %c %d", &num1, &op, &num2);

		  int result;

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
                    printf("%d", num1%num2);
			       }
			       break;
			   default:
				   printf("Unknown Operator");
				  break;

		     }
    }

*/

