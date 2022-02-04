#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10], i, n, m, c=0, low, high, mid;
    printf("\nEnter the size of an array:  ");
    scanf("%d", &n);
    printf("\nEnter the Elements in the ascending order :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number to be search: ");
    scanf("%d", &m);
    low = 0, high = n-1;
    while (low <= high)
    {
        mid = (low+high)/2;
        if (m == a[mid])
        {
            c = 1;
            printf("\n%d found at %d position.", m, mid+1);
            break;
        }
        else if (m < a[mid])
        {
            high = mid - 1;
        }
        else
           low = mid + 1;
     
    }
    if (c == 0)
    {
        printf("\n%d is not found.", m);
    }
    printf("\n\nProgram Ended.\n"); 
    return 0;
    
    
}
