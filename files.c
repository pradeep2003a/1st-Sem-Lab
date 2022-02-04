#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{

    FILE *fp1 = fopen("file1.txt", "a");
    FILE *fp2 = fopen("file2.txt", "r");
    char c;
    if (fp1 == NULL || fp2 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }
    fputc(' ', fp1);
    while ((c = fgetc(fp2)) != EOF)
        fputc(c, fp1);
    printf("File1 and File2 Merged please check file1");
    fclose(fp1);
    fclose(fp2);
    getch();
    return 0;
}