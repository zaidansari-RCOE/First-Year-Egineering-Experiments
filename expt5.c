/*  Name    : Mohd Zaid Ansari
    UIN     : 241P057
    Roll No : 51
    Topic   : Experiment 5 task1&2
              WAP to find the factorial of a number using iterative and recursive functions. 
*/

#include <stdio.h>

int iterative_factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
   
}
    return result;
}

int recursive_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * recursive_factorial(n - 1);
    }

}

int main() {
    int num;

    printf("\t\t***Factorial calculator***\n\n");
    tryagain:
    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers, Please try again\n");
        goto tryagain;
    }

    printf("Factorial of %d (by Iterative function) is: %d\n", num, iterative_factorial(num));

    printf("Factorial of %d (by Recursive function) is: %d\n", num, recursive_factorial(num));



    return 0;
}
/*Output:
                    ***Factorial calculator***

Enter a number:
8
Factorial of 8 (by Iterative function) is: 40320
Factorial of 8 (by Recursive function) is: 40320

Process returned 0 (0x0)   execution time : 2.512 s
Press any key to continue.
*/ 
