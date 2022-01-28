/*
    C Program : Sales Commission Calculator
    Exercise : 3.18
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    float sales;
    float salary;
    float percentage;

    printf("\n  Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while( sales != -1 ){
        percentage = ( sales * 9 ) / 100; //Calculation of nine percentage of sales
        salary = percentage + 200;

        printf("  Salary is: $%.2f\n", salary);

        printf("\n  Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }

    return 0;
}// end of function main
