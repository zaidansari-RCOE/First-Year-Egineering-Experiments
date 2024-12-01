/*Name      :Mohd Zaid Ansari
  UIN       :241P057
  Roll no   :51
  Expt No   :10 task 2
  Topic     :WAP to print the elements of an array in reverse order using pointers.
  */
#include <stdio.h>

int main() {
    int x[5];
    int *ptr;

    printf("\t\t***Array Reverser Using Pointer***\n");

    printf("Enter 5 elements for the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
    }

    ptr = &x[4];

    printf("Array elements in reverse order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}
/*Output:
                ***Array Reverser Using Pointer***
Enter 5 elements for the array:
4
5
2
3
6
Array elements in reverse order:
6 3 2 5 4
Process returned 0 (0x0)   execution time : 5.472 s
Press any key to continue.*/
