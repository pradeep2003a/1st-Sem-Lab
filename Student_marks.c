#include<stdio.h>

struct Student_marks
{
     char name[50];
     int roll_no;
     int test1, test2, test3, highest;
     float avg;
}s[50];

void display(int n)
{
    int i;
    printf("\nDisplaying Information:\n");
    printf("\nName\t\tRoll_No\tTest1\tTest2\tTest3\tAverage\t\tHighest Marks\n");
    printf("-----------------------------------------------------------------------------------------------------\n");
    for ( i = 0; i < n; i++)   
    {
        printf("%s\t\t", s[i].name);
        printf("%d\t", s[i].roll_no);
        printf("%d\t", s[i].test1);
        printf("%d\t", s[i].test2);
        printf("%d\t", s[i].test3);
        printf("%2f\t\t", s[i].avg);
        printf("%d\t\t", s[i].highest);
        printf("\n");
    }
}
void Highest(int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        if (s[i].test1>s[i].test2 && s[i].test1>s[i].test3)
        {
            s[i].highest = s[i].test1;
        }
        else if (s[i].test2>s[i].test3)
        {
            s[i].highest = s[i].test2;
        }
        else
        {
            s[i].highest = s[i].test3;
        }
        s[i].avg += (s[i].test1 + s[i].test2 + s[i].test3)/3;
    }    
}
void Search(int n)
{
    int ser, found=0, i;
    printf("\nEnter the student roll_no to be searched: ");
    scanf("%d", &ser);
    for ( i = 0; i < n; i++)
    {
        if (s[i].roll_no == ser)
        {
            printf("\nDisplaying Search Information:\n");
            printf("\nName\t\tRoll_no\tTest1\tTest2\tTest3\t\tAverage\t\tHighest Marks\n");
            printf("-------------------------------------------------------------------------------------\n");
            printf("%s\t\t", s[i].name);
            printf("%d\t", s[i].roll_no);
            printf("%d\t", s[i].test1);
            printf("%d\t", s[i].test2);
            printf("%d\t", s[i].test3);
            printf("%2f\t\t", s[i].avg);
            printf("%d\t\t", s[i].highest);
            printf("\n");
        }
        else
        {
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("No student record found.\n");
    }  
}
int main()
{
    int i,n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter information of %d students\n", n);
    printf("\nName \tRoll_No\tTest1\tTest2\tTest3\n");
    printf("----------------------------------------------------------\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%s  %d  %d  %d  %d", &s[i].name, &s[i].roll_no, &s[i].test1, &s[i].test2, &s[i].test3);
        
    }
    Highest(n);
    display(n);
    Search(n);
    return 0;
}