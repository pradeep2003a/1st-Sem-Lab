#include<stdio.h>
#include<conio.h>
void main()
{
    int Mat_A[10][10], Mat_B[10][10], Mat_mul[10][10]={0}, Mat_trans[10][10]={0};
    int i, j, k, m, n, p, q;
    printf("\nEnter the number of rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("\nEnter the number of rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);
    if (n != p)
    {
        printf("Matrix multiplication not possible!!\n");
        return;
    }
    else
    printf("Enter the elements of Matrix A:\n");
    for ( i = 0; i < m; i++)
       for ( j = 0; j < n; j++)
        scanf("%d", &Mat_A[i][j]);
    printf("Enter the elements of Matrix B:\n");
    for ( i = 0; i < p; i++)
    {
       for ( j = 0; j < q; j++)
        scanf("%d", &Mat_B[i][j]);
    }
    for ( i = 0; i < n; i++)
    {   for ( j = 0; j < p; j++)
          for ( k = 0; k < q; k++)
            Mat_mul[i][j] += Mat_A[i][k] * Mat_B[k][j];
    }
    printf("Resultant of the matrix multiplicatiion:\n");

    for ( i = 0; i < m; ++i)
    {
        for ( j = 0; j < q; ++j)
          printf("%d ", Mat_mul[i][j]);
          printf("\n");
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        Mat_trans[j][i] = Mat_mul[i][j];
    }
    printf("\nTranspose Matrix:\n");
    for ( i = 0; i < q; ++i)
    {
        for ( j = 0; j < m; ++j)
        printf("%d ", Mat_trans[i][j]);
        printf("\n");
    }
    getch();   
}