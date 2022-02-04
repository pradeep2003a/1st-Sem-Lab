#include<stdio.h>
#include<math.h>
#define SIZE 100

int main()
{
    int n, i;
    float a[SIZE], sum=0, mean=0, variance=0, deviation=0;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    printf("\n");

    for ( i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("Enter the 1st element: ");
            scanf("%f", &a[0]);
        }
        if (i == 1)
        {
            printf("Enter the 2nd element: ");
            scanf("%f", &a[1]);
        }
        if (i == 2)
        {
            printf("Enter the 3rd element: ");
            scanf("%f", &a[2]);
        }    
    }
    for ( i = 3; i < n; i++)
    {
        printf("Enter the %dth element: ", i+1);
        scanf("%f", &a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    mean = sum/n;
    printf("\nMean (Average) = %f", mean);

    //Find variance
    sum = 0;
    for ( i = 0; i < n; i++)
    {
        sum = sum + ((a[i]-mean) * (a[i]-mean));
    }
    variance = sum / n;
    printf("\nVariance = %f", variance);
    
    //Find Std Deviation
    deviation = sqrt(variance);
    printf("\nStandard Deviation = %f", deviation);

    printf("\n\nProgram Ended.\n");
    return 0;
}