/*Name      :Mohd Zaid Ansari
  UIN       :241P057
  Roll no   :51
  Expt No   :10 task 1
  Topic     :WAP to add two numbers using pointers.
  */
#include <stdio.h>

int main() {
    int a, b, sum;
    int *ptr1, *ptr2, *ptr_sum;

printf("\t\t***Sum using Pointers***\n");
    printf("Enter the first number: ");
        scanf("%d", &a);
    printf("Enter the second number: ");
        scanf("%d", &b);

    ptr1 = &a;
    ptr2 = &b;
    ptr_sum = &sum;

    *ptr_sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, *ptr_sum);

    return 0;
}
/*Output:
                ***Sum using Pointers***
Enter the first number: 7
Enter the second number: 8
Sum of 7 and 8 is: 15

Process returned 0 (0x0)   execution time : 6.019 s
Press any key to continue.

