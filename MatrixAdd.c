#include<stdio.h>
#include<conio.h>
void main()
{
    static int array[10][10];
    int i,j,m,n,sum=0;
    printf("Enter the order of the Matrix:\n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    //Performing Addition of elements in each rows.
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            sum = sum + array[i][j];
        }
        printf("Sum of the %d row is = %d\n", i, sum);
        sum = 0;
    }
    //Performing Addition of elements in each column.
    sum=0;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            sum = sum + array[i][j];
        }
        printf("Sum of the %d column is = %d\n", j, sum);
        sum=0;
    }
    //Performing Addition OF all the elements of the matrix.
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            sum = sum + array[i][j];
        }
    }
    printf("Sum Of all the elements of the matrix is = %d\n", sum);

    //Performing Addition of diagonal elements.
    sum=0;
    for ( i = 0; i < n; i++)
    {
        sum = sum + array[i][i];
    }
    printf("\nSum of Diagonal Elements of the matrix is = %d", sum);

    getch();
}