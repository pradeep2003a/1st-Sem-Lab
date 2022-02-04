#include<stdio.h>
#include<conio.h>
void countCharType(char str[100])
{
 // Declare the variable vowels, consonant, digit, WhiteSpace
int vowels = 0, consonant = 0, WhiteSpace = 0, SpecialChar=0,
digit = 0,i;
for (i = 0; str[i]!='\0'; i++) 
{
 char ch = str[i];
if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) 
{
// To handle upper case letters
 ch = tolower (ch);
if (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u')
 vowels++;
else
 consonant++;
 }
 else if (ch >= '0' && ch <= '9')
 digit++;
 else if(ch == ' ')
 {
 WhiteSpace++;
}
else
{
SpecialChar++;
}
}
 printf("\n Vowels:%d\n ",vowels);
 printf("Consonant:%d\n ", consonant);
 printf("Digit:%d\n " , digit);
 printf("WhiteSpace:%d\n ", WhiteSpace);
 printf("SpecialChar:%d\n ", SpecialChar);
}
int main()
{
 char str[100];
 printf("Enter input : ");
 gets(str);
 countCharType(str);// Calling another function
 return 0;
 getch();
}