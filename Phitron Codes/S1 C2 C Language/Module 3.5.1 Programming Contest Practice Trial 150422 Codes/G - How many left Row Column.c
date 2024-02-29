    /*
    In a grid there are HH rows and WW columns of cells.
    All cells are white initially.

    Alex picks some hh rows and ww columns.
    Then all cells that are in these rows or columns are colored black.

    How many cells will remain white?
    */

     #include <stdio.h>

      int main () {

      // taking input of white main row and main column
      int mainRow, mainColumn;
      scanf("%d %d", &mainRow, &mainColumn);
      // taking input of blacked row and column
      int blackedRow, blackedColumn;
      scanf("%d %d", &blackedRow, &blackedColumn);


      // calculating the difference between the inputed value
      int rowDifference, columnDifference;
      rowDifference = mainRow-blackedRow;
      columnDifference = mainColumn-blackedColumn;

      // calculating the remaining white cells
      int otherCells = rowDifference*columnDifference;


      printf("%d", otherCells);

      return 0;
      }
