/*  Name    : Mohd Zaid Ansari
    UIN     : 241P057
    Roll No : 51
    Topic   : Experiment 4 task1
              WAP to find all the prime numbers between two numbers using functions.
*/

#include <stdio.h>

int primeornot(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
    }
    }
    return 1;
}

void primes_between(int start, int end) {
        printf("Prime numbers between %d and %d are: ", start, end);
        int prime_no = 0;
        for (int num = start; num <= end; num++) {
        if (primeornot(num)){
            printf("%d ", num);
            prime_no = 1;}
    }
    if (!prime_no) {
        printf("No primes in this range, please enter a range that has primes");
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("\t\t***Prime number finder between two numbers***\n\n");

    printf("Enter the starting number:\n ");
        scanf("%d", &start);
    printf("Enter the ending number:\n ");
        scanf("%d", &end);


    primes_between(start, end);

    return 0;
}
/*Output:
                    ***Prime number finder between two numbers***

Enter the starting number:
 2
Enter the ending number:
 46
Prime numbers between 2 and 46 are: 2 3 5 7 11 13 17 19 23 29 31 37 41 43

Process returned 0 (0x0)   execution time : 16.529 s
Press any key to continue.*/
