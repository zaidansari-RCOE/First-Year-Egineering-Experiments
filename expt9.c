/*Name      :Mohd Zaid Ansari
  UIN       :241P057
  Roll no   :51
  Expt No   :9
  Topic     :Design a structure student_record to contain name, roll_number, and total marks
obtained. Write a program to read 5 students data from the user and then display the
topper on the screen.
  */
#include <stdio.h>

struct student_record {
    char name[50];
    int roll_number;
    int total_marks;
};

int main() {
    struct student_record students[5];
    int i;
    struct student_record topper;
    printf("\t\t****Student Records****\n\n");

    printf("Enter details for 5 students:\n");

    printf("\nStudent 1:\n");

    printf("Enter name: ");
        gets(students[0].name);
    printf("Enter roll number: ");
        scanf("%d", &students[0].roll_number);

    printf("Enter total marks: ");
        scanf("%d", &students[0].total_marks);

    topper = students[0];

    for (i = 1; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
            gets(students[i].name);
        printf("Enter roll number: ");
            scanf("%d", &students[i].roll_number);
        printf("Enter total marks: ");
            scanf("%d", &students[i].total_marks);

        if (students[i].total_marks > topper.total_marks) {
            topper = students[i];
        }
    }

    printf("\nTopper:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_number);
    printf("Total Marks: %d\n", topper.total_marks);

    return 0;
}
/*                ****Student Records****

Enter details for 5 students:

Student 1:
Enter name: zaid
Enter roll number: 51
Enter total marks: 99

Student 2:
Enter name: khalid
Enter roll number: 45
Enter total marks: 88

Student 3:
Enter name: shubham
Enter roll number: 9
Enter total marks: 79

Student 4:
Enter name: shreyas
Enter roll number: 67
Enter total marks: 97

Student 5:
Enter name: idris
Enter roll number: 46
Enter total marks: 78

Topper:
Name: zaid
Roll Number: 51
Total Marks: 99

Process returned 0 (0x0)   execution time : 62.575 s
Press any key to continue.*/
