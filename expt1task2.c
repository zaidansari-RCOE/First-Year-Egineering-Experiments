/*  NAME; Zaid Ansari
    UIN:241P057
    Division:C3
    Title:WAP to get students PCM marks from the user and find the average. 
    Use conditional operator to print if the student is eligible for admission.
    Eligibility criteria is 50% in PCM. 
    Experiment 1,Task 2
    Roll number:51
    */
#include<stdio.h>
int main()
{   int phy,chem,math,total ;
    float avg;
            printf("\t\t\t***Student Eligibity Tool***\n\n\n");
            printf("**Enter Physics Marks out of 100:\n\n");
                scanf ("%d", &phy);
            printf("\n");
            printf("**Enter Chemistry Marks out of 100:\n\n");
                scanf ("%d", &chem);
            printf("\n");
            printf("**Enter Mathematics Marks out of 100:\n\n");
                scanf ("%d", &math);
            printf("\n");
            total=phy+chem+math;
            avg=total/3;
            printf("Your Average is %.2f%% \n\n",avg);
            (avg>=50)?printf("*Congratulations*\nYou are Eligible for admission."):printf("Sorry, you're not eligible for admission, try again next year:)");
            printf("\n\n\n");


return 0;
}
/*                        ***Student Eligibity Tool***


**Enter Physics Marks out of 100:

70

**Enter Chemistry Marks out of 100:

70

**Enter Mathematics Marks out of 100:

70

Your Average is 70.00%

*Congratulations*
You are Eligible for admission.



Process returned 0 (0x0)   execution time : 5.775 s
Press any key to continue.*/
