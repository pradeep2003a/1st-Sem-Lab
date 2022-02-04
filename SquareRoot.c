#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, d, x, x1, x2, realpart, imagpart;
    printf("\nEnter the coeffcients of quadratic equation:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        x = -c / b;
        printf("\nThe only root is x = %7.3f", x);
    }
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("\nReal and Distinct roots are ");
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("\nx1 = %7.3f \nx2 = %7.3f", x1, x2);
    }
    else if (d == 0)
    {
        printf("\nRepeated roots are ");
        x1 = -b / (2 * a);
        x2 = x1;
        printf("\nx1 = x2 = %7.3f", x1, x2);
    }
    else
    {
        realpart = -b / (2 * a);
        imagpart = sqrt(-d) / (2 * a);
        printf("\nComplex roots are  ");
        printf("\nx1 = %7.3f + i%7.3f", realpart, imagpart);
        printf("\nx2 = %7.3f - i%7.3f", realpart, imagpart);
    }
printf("\n\nProgram Ended.\n");
return 0;
}