// Date-> 12/10/23 ,Author Name = Aman Singh

/* 4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
*/

#include <stdio.h>
int main()
{
    char var;
    printf("choose a following option by a,b,c,d\n");
    printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("d.Exit\n");

    printf("Please choose anyone of the option: ");
    scanf("%c", &var);

    switch (var)
    {
        int side1, side2, side3;

    case 'a':

        printf("Plese enter three sides of a tringle to cheak either this tringle is isosceles tringle or not:\n");
        scanf("%d %d %d", &side1, &side2, &side3);
        if ((side1 == side2) || (side1 == side3) || (side2 == side3))
            printf("Yes, This is a isosceles tringle.\n");
        else
            printf("No, This is not a isosceles tringle.\n");
        break;
    case 'b':

        printf("Plese enter three sides of a tringle to cheak either this tringle is right angled tringle or not:\n");
        scanf("%d %d %d", &side1, &side2, &side3);
        if ((side1 == 90) || (side2 == 90) || (side3 == 90))
            printf("Yes, This is a right angled tringle");
        else
            printf("No, This is not a right angled tringle");
        break;
    case 'c':

        printf("Plese enter three sides of a tringle to cheak either this tringle is equilateral tringle or not:\n");
        scanf("%d %d %d", &side1, &side2, &side3);
        if ((side1 != side2) || (side2 != side3))
            printf("No, This is not a equilateral tringle.\n");
        else
            printf("Yes, This is a equilateral tringel.\n");
        break;
    case 'd':

        break;
    default:
        printf("You choosed a wrong option");
        break;
    }

    return 0;
}
