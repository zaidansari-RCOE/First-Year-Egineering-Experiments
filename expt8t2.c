/*Name      :Mohd Zaid Ansari
  UIN       :241P057
  Roll no   :51
  Expt No   :8 task 2
  Topic     :WAP to check if the entered string is palindrome or not.
  */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];

    printf("\t\t****PALINDROME CHECKER****\n\n\n");

    printf("Enter a string: ");

    gets(str);

    strcpy(reversed, str);

    strrev(reversed);


    if (strcmp(str, reversed) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

/*OUTPUT:
                ****PALINDROME CHECKER****


Enter a string: RACECAR
The string is a palindrome.

Process returned 0 (0x0)   execution time : 17.030 s
Press any key to continue.*/
