/*Name      :Mohd Zaid Ansari
  UIN       :241P057
  Roll no   :51
  Expt No   :8 task 1
  Topic     :WAP to find the length of a string without using library function.
  */


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("\t\t=====String length finder=====\n\n\n");
    printf("Enter a string: ");
    gets(str);


    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }


    printf("Length of the string is: %d\n", length);

    return 0;
}

/* OUTPUT:
               =====String length finder=====


Enter a string: Mohd_Zaid_Ansari
Length of the string is: 16

Process returned 0 (0x0)   execution time : 22.390 s
Press any key to continue.*/
