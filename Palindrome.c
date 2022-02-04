#include<stdio.h>
#include<conio.h>

int main()
{
    long num, temp, reverse;
    int rem;
    printf("\nInput a number: ");
    scanf("%ld", &num);
    temp = num;
    reverse = 0;
    while (num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if (temp == reverse)
    {
        printf("\n%ld is a palindrome.\n", temp);
    }
    else
    {
        printf("\n%ld s not a palindrome.\n", temp);
    }
    return 0;
    
    
}