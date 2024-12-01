/*Name      :Mohd Zaid Ansari
  UIN       :241P057
  Roll no   :51
  Expt No   :11
  Topic     :WAP to maintain a simple employee database using file handling.
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

void add_employee() {
    struct employee emp;
    FILE *file = fopen("employee_database.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    getchar();
    gets(emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fprintf(file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
    fclose(file);
    printf("Employee record added successfully!\n");
}

void display_employees() {
    struct employee emp;
    FILE *file = fopen("employee_database.txt", "r");

    if (file == NULL) {
        printf("No employee records found!\n");
        return;
    }

    printf("\nEmployee Records:\n");
    printf("ID\tName\t\tSalary\n");
    printf("---------------------------------\n");

    while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
        printf("%d\t%-15s%.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
}

void delete_employee() {
    int id;
    struct employee emp;
    FILE *file = fopen("employee_database.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (file == NULL) {
        printf("No employee records found!\n");
        return;
    }

    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    int found = 0;
    while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
        if (emp.id != id) {
            fprintf(temp, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp);

    if (found) {
        remove("employee_database.txt");
        rename("temp.txt", "employee_database.txt");
        printf("Employee record deleted successfully!\n");
    } else {
        printf("Employee ID not found!\n");
        remove("temp.txt");
    }
}

void edit_employee() {
    int id;
    struct employee emp;
    FILE *file = fopen("employee_database.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (file == NULL) {
        printf("No employee records found!\n");
        return;
    }

    printf("Enter Employee ID to edit: ");
    scanf("%d", &id);

    int found = 0;
    while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
        if (emp.id == id) {
            found = 1;
            int edit_choice;

            printf("Employee found!\n");
            printf("What would you like to edit?\n");
            printf("1. Name\n");
            printf("2. Salary\n");
            printf("Enter your choice: ");
            scanf("%d", &edit_choice);

            switch (edit_choice) {
                case 1:
                    printf("Enter new Employee Name: ");
                    getchar(); // Consume leftover newline character
                    gets(emp.name);
                    break;
                case 2:
                    printf("Enter new Employee Salary: ");
                    scanf("%f", &emp.salary);
                    break;
                default:
                    printf("Invalid choice! No changes made.\n");
                    continue;
            }
        }
        fprintf(temp, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
    }

    fclose(file);
    fclose(temp);

    if (found) {
        remove("employee_database.txt");
        rename("temp.txt", "employee_database.txt");
        printf("Employee record edited successfully!\n");
    } else {
        printf("Employee ID not found!\n");
        remove("temp.txt");
    }
}

int main() {
    int choice;

    printf("\t\t *** Employee Database *** \n\n");

    while (1) {
        printf("\nEmployee Database Menu:\n");
        printf("1. Add Employee Record\n");
        printf("2. Display Employee Records\n");
        printf("3. Delete Employee Record\n");
        printf("4. Edit Employee Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_employee();
                break;
            case 2:
                display_employees();
                break;
            case 3:
                delete_employee();
                break;
            case 4:
                edit_employee();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
/*Output:
                 *** Employee Database ***


Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Delete Employee Record
4. Edit Employee Record
5. Exit
Enter your choice: 2

Employee Records:
ID      Name            Salary
---------------------------------
5       zaid ansari    350.00
2       idris          150.00
1       khalid         150.00

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Delete Employee Record
4. Edit Employee Record
5. Exit
Enter your choice: 1
Enter Employee ID: 3
Enter Employee Name: arhaan
Enter Employee Salary: 200
Employee record added successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Delete Employee Record
4. Edit Employee Record
5. Exit
Enter your choice: 3
Enter Employee ID to delete: 2
Employee record deleted successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Delete Employee Record
4. Edit Employee Record
5. Exit
Enter your choice: 2

Employee Records:
ID      Name            Salary
---------------------------------
5       zaid ansari    350.00
1       khalid         150.00
3       arhaan         200.00

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Delete Employee Record
4. Edit Employee Record
5. Exit
Enter your choice: 4
Enter Employee ID to edit: 5
Employee found!
What would you like to edit?
1. Name
2. Salary
Enter your choice: 2
Enter new Employee Salary: 250
Employee record edited successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Delete Employee Record
4. Edit Employee Record
5. Exit
Enter your choice: 2

Employee Records:
ID      Name            Salary
---------------------------------
5       zaid ansari    250.00
1       khalid         150.00
3       arhaan         200.00

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Delete Employee Record
4. Edit Employee Record
5. Exit
Enter your choice: 5
Exiting the program.

Process returned 0 (0x0)   execution time : 59.770 s
Press any key to continue.
