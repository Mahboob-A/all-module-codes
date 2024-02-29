 #include <stdio.h>

      int main () {


      int H, W;
      scanf("%d %d", &H, &W);

      int h, w;
      scanf("%d %d", &h, &w);

      int h1, w1;
      h1 = H-h;
      w1 = W-w;


      int otherCells = h1*w1;


      printf("%d", otherCells);

      return 0;
      }
