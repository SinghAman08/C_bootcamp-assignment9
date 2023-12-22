// Date-> 12/10/23 ,Author Name = Aman Singh

/*

7. Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the
given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

*/
/*

This logic I will follow here....
for below 51 unit --> 0.50
for below 151 units --> 0.75
for below 251 units --> 1.2
for above 250 units --> 1.5
and end the last we have to surcharge of 20% in bill.

*/
#include <stdio.h>
int main()
{
    int elec_unit;
    printf("Enter your electricity unit: ");
    scanf("%d", &elec_unit);
    printf("elec_unit = %d\n", elec_unit);
    switch (elec_unit >= 51)
    {

    case 1:
        switch (elec_unit >= 151)
        {
        case 1:
            switch (elec_unit >= 251)
            {
            case 1:

                printf("Your electricity unit is %d and your electricity bill is %.2f\n", elec_unit, (elec_unit * 1.5) + ((elec_unit * 1.5) * 20) / 100);
                break;
            case 0:
                printf("Your electricity unit is %d and your electricity bill is %.2f\n", elec_unit, (elec_unit * 1.2) + ((elec_unit * 1.2) * 20) / 100);
                break;
            }
            break;
        case 0:
            printf("Your electricity unit is %d and your electricity bill is %.2f\n", elec_unit, (elec_unit * .75) + ((elec_unit * .75) * 20) / 100);
            break;
        }
        break;
    case 0:
        printf("Your electricity unit is %d and your electricity bill is %.2f\n", elec_unit, (elec_unit * .5) + ((elec_unit * .5) * 20) / 100);
    }
    return 0;
}
