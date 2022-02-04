#include <stdio.h>
#include <conio.h>
struct employee
{
    char Ename[50];
    int Emp_ID;
    int Salary;
};
int display(struct employee Emp[], int n)
{
    int i;
    printf("\nThe Employee Details are as follows\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d details are:\n", i + 1);
        printf("Employee Name: %s\n", Emp[i].Ename);
        printf("Employee ID: %d\n", Emp[i].Emp_ID);
        printf("Employee Salary: %d\n", Emp[i].Salary);
    }
    return 0;
}
void main()
{
    int n, i;
    struct employee Emp1[100];

    printf("Enter the number of Employees: ");
    scanf("%d", &n);
    printf("\nEnter the details of %d Employees:", n);
    for (i = 0; i < n; ++i)
    {
        printf("\nEnter Employee %d Name: ", i + 1);
        getchar();
        gets(Emp1[i].Ename);
        printf("Enter Employee %d ID: ", i + 1);
        scanf("%d", &Emp1[i].Emp_ID);
        printf("Enter Employee %d Salary: ", i + 1);
        scanf("%d", &Emp1[i].Salary);
    }
    display(Emp1, n);
    printf("\nThe Employee Details whose salary is greater than 15000\n");
    for (i = 0; i < n; i++)
    {
        if (Emp1[i].Salary > 15000)
        {
            printf("\n");
            printf("Employee Name : %s\n", Emp1[i].Ename);
            printf("Employee ID : %d\n", Emp1[i].Emp_ID);
            printf("Employee Salary : %d\n", Emp1[i].Salary);
        }
    }
    getch();
}