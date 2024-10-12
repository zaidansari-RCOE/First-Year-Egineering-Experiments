/*  Name:Mohd Zaid Mashooque Ansari
    Batch:C3
    ROll number:51
    Experiment 2 TASK 2
    UIN:241P057
    Title:WAP to find the sum of all the odd numbers entered by the user */

#include <stdio.h>

int main() {
    int sn, en, sum = 0; // sn is starting number,en is ending number
    printf("\t*Tool to find sum of all odd numbers between any two numbers*\n\n");

    printf("Enter the starting number:\n");
    scanf("%d", &sn);
    printf("\n\n");

    printf("Enter the ending number:\n");
    scanf("%d", &en);
    printf("\n\n");

    if (sn > en) {
        printf("Start number should be less than or equal to end number.\n");
        return 1;
    }

    for (int i = sn; i <= en; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("Addition of all the odd numbers between %d and %d is %d\n", sn, en, sum);

    return 0;
}
/*Output:
        *Tool to find sum of all odd numbers between any two numbers*

Enter the starting number: 0
Enter the ending number: 10
Addition of all the odd numbers between 0 and 10 is 25

Process returned 0 (0x0)   execution time : 5.796 s
Press any key to continue.*/
