// Date-> 12/10/23 ,Author Name = Aman Singh

/*
5. Convert the following if-else-if construct into switch case:

if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid");

*/

#include <stdio.h>
int main()
{
    int var;
    printf("Enter a value: ");
    scanf("%d", &var);

    switch (var)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("invalid");
        break;
    }

    return 0;
}