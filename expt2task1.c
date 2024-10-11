/*  Name:Mohd Zaid Mashooque Ansari
    Batch:C3
    ROll number:51
    Experiment 2 TASK 1
    UIN:241P057
    Title:WAP to find if entered number is even or odd */

    #include<stdio.h>
    int main()
    {
        int n;
            printf("\t\t****Even-Odd number detector****\n\n\n");
            printf("\t**Enter a number!**\n\n");
                scanf("%d", &n);
            printf("\n\n");

            if(n%2==0){
                printf("%d is an even number!", n);
            } else {
                printf("%d is an odd number!", n);
                }
            return 0;
        }
        /*Output:
                          ****Even-Odd number detector****


            **Enter a number!**

    57


    57 is an odd number!
    Process returned 0 (0x0)   execution time : 3.037 s
    Press any key to continue. */
