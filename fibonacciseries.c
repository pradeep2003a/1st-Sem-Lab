#include<stdio.h>
#include<conio.h>
int fib (int n)
{
    if (n == 0 || n == 1)
       return n;
    else
       return (fib(n-1) + fib(n-2));
}
int main()
{
    int n, i;
    printf("\nPlease enter the limit for fibonacci series: ");
    scanf("%d", &n);
    printf("\nFibonacci series terms are:\n");
    for ( i = 0; i <= n; i++)
    {
        printf("%d\n", fib(i));
    }
    printf("\n\nProgram Ended.\n");
    return 0;
}