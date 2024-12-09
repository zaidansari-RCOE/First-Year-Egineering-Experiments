/*Name      :Mohd Zaid Ansari
  UIN       :241P057
  Roll no   :51
  Expt No   :7 task 2
  Topic     :WAP to find the sum of two matrix
  */
  
  
#include <stdio.h>

void scanArray(int x[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &x[i][j]);
        }
    }
}

void printArray(int x[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("\t\t###MATRIX ADIITION CALCULATOR###\n");
    printf("Enter number of rows:\n");
    scanf("%d", &rows);
    printf("Enter number of columns:\n");
    scanf("%d", &cols);

    int a[100][100], b[100][100], sum[100][100];

    printf("Enter values for the first array:\n");
    scanArray(a, rows, cols);

    printf("Enter values for the second array:\n");
    scanArray(b, rows, cols);


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("First array:\n");
    printArray(a, rows, cols);

    printf("Second array:\n");
    printArray(b, rows, cols);

    printf("Sum of the two arrays:\n");
    printArray(sum, rows, cols);

    return 0;
}
/*                ###MATRIX ADIITION CALCULATOR###
Enter number of rows:
2
Enter number of columns:
2
Enter values for the first array:
6
7
3
5
Enter values for the second array:
2
7
3
8
First array:
6 7
3 5
Second array:
2 7
3 8
Sum of the two arrays:
8 14
6 13

Process returned 0 (0x0)   execution time : 17.386 s
Press any key to continue.
*/
