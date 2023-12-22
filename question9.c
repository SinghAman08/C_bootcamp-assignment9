// Date-> 12/12/23 ,Author Name = Aman Singh

// 9. Program to Convert even number into its upper nearest odd number Switch Statement.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a even number: ");
    scanf("%d", &num);

    switch (num % 2 == 0)
    {
    case 1:
        num++;
        printf("The nearest odd number is %d", num);
        break;

    default:
        printf("You did not enter an even number\n");
        break;
    }
    return 0;
}
