#include <stdio.h>
#include<conio.h>
int main()
{
int array[100], num, c, i, swap;

printf("Enter number of elements\n");
scanf("%d", &num);
printf("Enter %d integers\n", num);
for (c = 0; c < num; c++)
scanf("%d", &array[c]);
for (c = 0 ; c < num - 1; c++)
{
for (i = 0 ; i < num - c - 1; i++)
{
if (array[i] > array[i+1])
{
swap = array[i];
array[i] = array[i+1];
array[i+1] = swap;
}
}
}
printf("Sorted list in ascending order:\n");
for (c = 0; c < num; c++)
printf("%d\n", array[c]);
getch();
return 0;
}