#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define NULL1 0

void main()
{
    char *buffer;
    if ((buffer = (char *)malloc(6)) == NULL1)
    {
        printf("Malloc failed.\n");
        exit(1);
    }
    printf("Buffer of size %d is created.\n", _msize(buffer));
    strcpy(buffer, "MYSORE");
    printf("\nBuffer contains %s.\n", buffer);

    if ((buffer= (char *)realloc(buffer,25))== NULL1)
    {
        printf("Reallocation failed.\n");
        exit(1);
    }
    printf("\nBuffer size modified.\n");
    printf("Modified Buffer size is %d\n", _msize(buffer));
    printf("\nBuffer still cntains: %s", buffer);
    strcpy(buffer, "BENGALURU");
    printf("\nBuffer now contains %s\n", buffer);

    free(buffer);
    getch();
}