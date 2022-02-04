#include<stdio.h> 
#include<conio.h> 
void main () 
{ 
int n, m; 
             
printf("Input two numbers : "); 
scanf("%d %d", &m,&n); 
if (m <= 0 || n <= 0) 
     printf("Invalid Input"); 
else 
{ 
    while (m!=n) 
    { 
        if (m>n) 
         m = m-n; 
        else 
         n = n-m; 
    } 
    printf("GCD = %d \n", n); 
}
getch(); 
}