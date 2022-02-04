#include<stdio.h>

int main()
{
    int n, key, a[100], i, found=0;
    printf("\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    for (i=0; i < n; i++)
    {
       if (i == 0)
       {
          printf("Enter the 1st element: ");
          scanf("%d", &a[0]);
       }
       if (i == 1)
       {
          printf("Enter the 2nd element: ");
          scanf("%d", &a[1]);
       }
       if (i == 2)
       {
          printf("Enter the 3rd element: ");
          scanf("%d", &a[2]);
       }
    }
    for ( i = 3; i < n; i++)
    {
      printf("Enter the %dth element: ", i+1);
      scanf("%d", &a[i]);
    }
    
    printf("\nEnter the element to be searched:  ");
    scanf("%d", &key);

    for (i=0; i < n; i++)
    {
        if (a[i] == key)
        {
            found=1;
            break;
        }
    }
    if (found ==1)
      printf("\nKey element %d found at the position %d", key, i+1);
    else
      printf("\nKey element not found.");

    printf("\n\nProgram Ended.\n");
    return 0;  
    
}