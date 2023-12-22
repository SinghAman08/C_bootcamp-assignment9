// 1. Write a program which takes the month number as an input and display number of days in that month.

// Date-> 12/10/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int mnth_num;
    printf("Enter a month number: ");
    scanf("%d", &mnth_num);

    switch (mnth_num)
    {
    case 1:
        printf("This is January and there are 31 days in this month");
        break;
    case 2:
        printf("This is faburary and there are 29/28 days in this month");
        break;
    case 3:
        printf("This is March and there are 31 days in this month");
        break;
    case 4:
        printf("This is April and there are 30 days in this month");
        break;
    case 5:
        printf("This is May and there are 31 days in this month");
        break;
    case 6:
        printf("This is June and there are 30 days in this month");
        break;
    case 7:
        printf("This is July and there are 31 days in this month");
        break;
    case 8:
        printf("This is August and there are 31 days in this month");
        break;
    case 9:
        printf("This is September and there are 30 days in this month");
        break;
    case 10:
        printf("This is October and there are 31 days in this month");
        break;
    case 11:
        printf("This is Novmber and there are 30 days in this month");
        break;
    case 12:
        printf("This is December and there are 31 days in this month");
        break;
    default:
        printf("You entered wrong number so please enter a valid number");
    }

    return 0;
}