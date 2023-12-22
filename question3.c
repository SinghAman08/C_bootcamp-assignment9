// Date-> 12/10/23 ,Author Name = Aman Singh

// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a day number of a week:\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Hi, I hope you will enjoy sunday\n");
        break;
    case 2:
        printf("Hi, I hope you are doing good\n");
        break;
    case 3:
        printf("Hi, Have a nice day...\n");
        break;
    case 4:
        printf("Hi, You have good knowladge\n");
        break;
    case 5:
        printf("Hi buddy\n");
        break;
    case 6:
        printf("Hi, Good Morning\n");
        break;
    case 7:
        printf("Hi, Good Nigth");
        break;
    default:
        printf("You enterd wrong number\n");
        break;
    }
    return 0;
}