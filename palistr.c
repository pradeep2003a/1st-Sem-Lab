#include<stdio.h>
#include<conio.h>
void main()
{
 int i,pal_len=0,len=0;
 char pal_str[100];
 printf("Enter a string to check whether it is palindrome or not: ");
 gets(pal_str);
 for(i=0;i<100;i++)
{
 if(pal_str[i]=='\0')
{
 break;
 }
 len++; // Calculating length of string
}
 for(i=0;i<len;i++)
 {
 if(pal_str[i]==pal_str[len-1-i])
 {
 pal_len++;
 }
 }
if(len==pal_len)
{
 printf("%s string is palindrome", pal_str);
 }
 else
 {
 printf("%s string is not palindrome", pal_str);
}
getch();
}
