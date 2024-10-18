/*  Name    : Mohd Zaid Ansari
    UIN     : 241P057
    Roll No : 51
    Topic   : Experiment 3 task2
              WAP to design a menu driven calculator using switch and goto
*/

#include <stdio.h>
    int main() {
        float n1,n2,result; //n1=first nuber,n2=second number
        int mod;
        char oprt,ins;
                repeat: //place to return for goto
                printf("\t\t***CALCULATOR***\n\n\n");
                printf("Operations\nAddition\t:\t+\nSubstraction\t:\t-\nMultiplication\t:\t*\nDivision\t:\t/\nModulus\t\t:\t%%\n\n\n\n");

         printf("Enter the operation\t:\n");
                scanf("%c",&oprt);
         printf("Enter the first number\t:\n");
                scanf("%f",&n1);
         printf("Enter the second number\t:\n");
                scanf("%f",&n2);

        switch(oprt)
        {
        case '+':
            result = n1+n2;
            printf("%.2f + %.2f = %.2f\n",n1,n2,result);
            break;

        case '-':
            result = n1-n2;
            printf("%.2f - %.2f = %.2f\n",n1,n2,result);
            break;

        case '*':
            result = n1*n2;
            printf("%.2f * %.2f = %.2f\n",n1,n2,result);
            break;

        case '/':
            if (n2!=0){
                result = n1/n2;
                printf("%.2f / %.2f = %.2f\n",n1,n2,result);
            } else {
            printf("invalid operation, please enter non zero second number.");
            }break;

        case '%':
                if ((int)n2 != 0) {
                    mod = (int)n1 % (int)n2;
                    printf("%.0f %% %.0f = %d\n", n1, n2, mod);
                } else {
                    printf("Modulus by zero is not possible.\n");
                }
                break;

        default:
                printf("Invalid operation. Please try again.\n");
                break;

        }
        printf("Do you want to continue using calculator? (Y/N):");
        scanf("%c",&ins);
        if(ins == 'Y' || ins == 'y')
            goto repeat;

        return 0;
        }
