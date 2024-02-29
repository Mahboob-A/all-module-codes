    #include <stdio.h>


    /// BOX CREATION USING NESTED LOOP

    int main() {

         int height, width;
         scanf("%d %d", &height, &width);

         for (int i = 0; i<width; i++) {  // header opening line of box
            printf("*");
         }
         printf("\n");


         for (int i = 0; i<height-2; i ++) {  //working for height generation upside down
                printf("*");
                for (int j = 0; j<width-2; j++) {   //working for bottom \n lines width
                printf(".");
             }
         printf("*");
         printf("\n");
         }
         for (int i = 0; i<width; i++) {  // box closing line
               printf("*");
         }


    }

    /**

      ///  multiplication chart

     int main() {
           int n;
           scanf("%d", &n) ;
           printf("row(upside down)\t column(up left-right)\n");
           for (int row = 1; row<=n; row++) {
                for (int col = 1; col<=n; col++) {
                    printf("  %d\t", row*col);
                }
                printf("\n");
           }
    }

    **/
