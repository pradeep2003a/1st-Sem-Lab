#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10], i, n, min_ele, max_ele, min_pos, max_pos, b;
    
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
   
    for ( i = 0; i < n; i++)  //Inputting array
    {
        printf("\nEnter the element number %d of array:  ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nThe array elements are: ");  //Array display
    for ( i = 0; i < n; i++)
      printf("%d ", a[i]);

    min_ele=a[0];
    max_ele=a[0];
    for ( i = 0; i < n; i++)   //making maximum and minimum
    {
        if (a[i] <= min_ele)
        {
            min_ele=a[i];
            min_pos=i;
        }
        if (a[i] >= max_ele)
        {
            max_ele=a[i];
            max_pos=i;
        }
    }
    printf("\nSmallest number = %d\nLargest Number = %d", min_ele, max_ele);
    b = a[max_pos];                                                          //Interchanging
    a[max_pos] = a[min_pos];
    a[min_pos] = b;
    printf("\nAfter interchanging the largest and smallest values, the array: \n");
    for ( i = 0; i < n; i++)
       printf("%d ", a[i]);
    printf("\n\nProgram Ended.\n");
    return 0;
}