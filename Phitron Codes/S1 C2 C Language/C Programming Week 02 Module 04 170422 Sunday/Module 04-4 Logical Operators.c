    #include <stdio.h>
    #include <stdbool.h>

    /*
    /// LOGICAL OPERATOR && (and)
/// finding if number is within 0-10 using Logical Operator &&
// && operator is true when all conditions are true.


    int main () {
        int num;
        scanf("%d", &num);

        if (num >=0 && num <= 10) {
			printf("Under 10");
        }
        else {
			printf("Not under 10");
        }

    }

/// || -> Operator
/// finding vowel and consonant using || -> (Or) opoerator

     int main () {
         char ch;
         scanf("%c", &ch);

         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
			printf("Vowel");
		}
		else {
			printf("Consonant");
		}
    }



    /// ! (Not) Operator.


    int main () {
        int num;
        scanf("%d", &num);

        if ( ! (num >=0 && num <= 10) ) {
			printf("Under 10");
        }
        else {
			printf("Not under 10");
        }

    }

    */


    /// finding leap year

    /*
    rule:
    year 4 diye vag jabe, divisible by 4;

    not divisible by 100
    and if divisible by 100,
    then also divisible by 400.
    */


    int main () {
        int year;
        scanf("%d", &year);
        bool is_leap_year = (year%4 == 0) && (year%100 != 0 || year%400 == 0);

        if (is_leap_year) {
			printf("The year is a leap year");
        }
        else {
			printf("The year is not leap year");
        }
    }

