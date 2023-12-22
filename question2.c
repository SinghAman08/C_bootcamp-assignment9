// Date-> 12/10/23 ,Author Name = Aman Singh

/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include <stdio.h>
int main()
{
    char var;
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    // printf("Choice any one of following menu by (a-e) to perform opertion on %d and %d numbers\n", x, y);
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\n\n");
    scanf(" %c", &var);

    switch (var)
    {
    case 'a':
        printf("\n");
        printf("%d + %d = %d", x, y, x + y);
        printf("\n\n\n");
        break;
    case 'b':
        printf("\n");
        printf("%d - %d = %d", x, y, x - y);
        printf("\n\n");
        break;
    case 'c':
        printf("\n");
        printf("%d x %d = %d", x, y, x * y);
        printf("\n\n");
        break;
    case 'd':
        printf("\n");
        printf("%d / %d = %d", x, y, x / y);
        printf("\n\n");
        break;
    case 'e':
        printf("\n");
        printf("You are exited from the case");
        printf("\n\n");
        break;
    default:
        break;
    }

    return 0;
}