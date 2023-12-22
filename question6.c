// Date-> 12/10/23 ,Author Name = Aman Singh

// 6. Program to check whether a year is a leap year or not. Using switch statement

#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);

    switch (yr % 100 == 0)
    {
    case 0:
        switch (yr % 4 == 0)
        {
        case 1:
            printf("Yes, %d is a leap year\n", yr);
            break;
        case 0:
            printf("No, %d is not a leap year\n", yr);
            break;
        }
        break;
    case 1:
        switch (yr % 400 == 0)
        {
        case 1:
            printf("Yes, %d is a leap year", yr);
            break;
        case 0:
            printf("No, %d is not a leap year", yr);
            break;
        }
        break;

    default:
        printf("You enterd invalid year");
        break;
    }
    return 0;
}