// Date-> 12/12/23 ,Author Name = Aman Singh

/*8. Program to convert a positive number into a negative number and negative number into a positive
number u#$sing a switch statement. */

#include <stdio.h>
int main()
{
    float x;
    printf("Enter a number:\n");
    scanf("%f", &x);
    switch (x > 0)
    {
    case 1:
        x *= -1;
        printf("%.1f after converted negetive it will be %.1f", x * -1, x);
        break;
    default:
        x *= -1;
        printf("%.1f after converted possitive it will be %.1f", x *= -1, x);
        break;
    }

    return 0;
}