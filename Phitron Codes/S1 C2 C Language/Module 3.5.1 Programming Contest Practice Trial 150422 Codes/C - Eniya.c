
    /*

    It is known that the processing of the one square meter of the panel needs 1 nanogramm
    of sulphide. In general, it is needed to process N rectangular panels,
    which dimensions are A by B meters. It is necessary to calculate as fast as possible,
    how much sulphide is needed in general for the processing of all panels of “Eniya”.
    Moreover, do not forget, that the panels need processing of both sides.

    */

      #include <stdio.h>

       int main() {

       int numOfRectangle, length, wide;
       scanf("%d %d %d", &numOfRectangle, &length, &wide);

       //int area = 2 * numOfRectangle * length * wide;
       printf("%d", 2 * numOfRectangle * length * wide);

       return 0;
       }
