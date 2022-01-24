/*
    C Program : Car-Pool Savings Calculator
    Exercise : 2.33
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    int miles_per_day;
    int cost_per_gallon;
    int average_miles;
    int parking_fees;
    int tolls_per_day;
    int total_cost_day;

    puts("");

    printf("\tEnter the total miles driven per day   : ");
    scanf("%d", &miles_per_day);
    printf("\tEnter the cost per gasoline in ($)     : ");
    scanf("%d", &cost_per_gallon);
    printf("\tEnter the average miles per gallon     : ");
    scanf("%d", &average_miles);
    printf("\tEnter the parking fees per day in ($)  : ");
    scanf("%d", &parking_fees);
    printf("\tEnter the tolls per day in ($)         : ");
    scanf("%d", &tolls_per_day);

    total_cost_day = ( miles_per_day * cost_per_gallon * average_miles ) + parking_fees + tolls_per_day;

    printf("\n\tYour cost per day of driving is %d\n", total_cost_day);

    return 0;

}// end of function main
