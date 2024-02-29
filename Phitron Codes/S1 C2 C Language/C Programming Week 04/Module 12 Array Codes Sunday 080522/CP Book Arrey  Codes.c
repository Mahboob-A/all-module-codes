 /**   #include <stdio.h> 
    int main () {
        int ft_marks, st_marks, final_marks;
        int total_marks;

        ft_marks = 50;
        st_marks = 65;
        final_marks = 85;
        total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;
        printf("%d\n", total_marks);

    return 0;

    }

**/
 #include <stdio.h>
 int main()
 {
     int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
     int i;
     for(i = 0; i < 10; i++) {
         printf("%d th element is: %d\n", i, ara);
     }
     return 0;
 }


