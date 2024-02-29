    #include <stdio.h>


    /// BOX CREATION USING NESTED LOOP

    int main() {

         int height, width;
         scanf("%d %d", &height, &width);

         for (int i = 0; i<width; i++) {  // header opening line of box
            printf("#");
         }
         printf("\n");


         for (int i = 0; i<height-2; i ++) {  //working for height generation upside down
                printf("*");
                for (int j = 0; j<width-2; j++) {   //working for bottom \n lines width
                printf(" ");
             }
         printf("*");
         printf("\n");
         }
         for (int i = 0; i<width; i++) {  // box closing line
               printf("*");
         }


    }
