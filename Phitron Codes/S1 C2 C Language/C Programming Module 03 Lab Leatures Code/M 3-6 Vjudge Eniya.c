    #include<stdio.h>

      int main() {

      /*

      int n;
      scanf("%d", &n);

      int length, wide;
      scanf("%d %d", &length, &wide);

      int sodium = n*length*wide*2;
      printf("%d", sodium);

      */

      //optimized code.

      int n, a, b;
      scanf("%d %d %d", &n, &a, &b);

      int area = 2*n*a*b;
      printf("%d %d %d\n",area);


      return 0;
      }
