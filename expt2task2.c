/*  Name:Mohd Zaid Mashooque Ansari
    Batch:C3
    ROll number:51
    Experiment 2 TASK 2
    UIN:241P057
    Title:WAP to find the sum of all the odd numbers entered by the user */

    #include<stdio.h>
    int main()
    {
        int i,sn,en,sum; /*sn=start number, en=ending number*/
            printf("\t***Tool to find sum of all odd numbers between any two numbers***\n\n");
            printf("Enter the starting number:");
                scanf("%d", &sn);
            printf("\n\n");
            printf("Enter the ending number:");
                scanf("%d", &en);
            printf("\n\n");
            for(i=sn;i<=en;i++){
                if(i%2!=0);
                }
                    sum=i+sum;
                            printf("addition of all the odd numbers between %d and %d is %d",&sum);

            return 0;
    }
