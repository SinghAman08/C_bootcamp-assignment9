// Date-> 12/22/23 ,Author Name = Aman Singh

// 10. C program to find all roots of a quadratic equation using switch case

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter the value of a,b and c\n");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    switch (d == 0)
    {
    case 1:
        printf("The roots are real and equal\n");
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        printf("root1 is %.2f and root2 is %.2f\n", r1, r2);
        break;

    case 0:
        switch (d > 0)
        {
        case 1:
            printf("roots are real and different\n");
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("root1 is %.2f and root2 is %.2f", r1, r2);
            break;
        case 0:
            printf("roots are imaginary\n");
            break;
        }
        break;
    }
    return 0;
}