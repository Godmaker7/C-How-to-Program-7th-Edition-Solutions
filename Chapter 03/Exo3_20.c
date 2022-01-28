/*
    C Program : Salary Calculator
    Exercise : 3.20
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/
#include <stdio.h>

//function main begins program execution
int main()
{

    float hours_worked;
    float hourly_rate;
    float salary;

    printf("\n  Enter # of hours worked(-1 to end): ");
    scanf("%f", &hours_worked);

    while ( hours_worked != -1 ){

        printf("  Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourly_rate);

        if ( hours_worked <= 40 ){
            salary = hours_worked * hourly_rate;
            printf("  Salary is %.2f\n\n", salary);
        } else {
            salary = hours_worked * hourly_rate;

            float half; //variable to for time-and-a-half for all hours worked in excess of 40 hours
            half = hourly_rate / 2;

            salary = salary + half;

            printf("  Salary is %.2f\n\n", salary);
          }

        printf("\n  Enter # of hours worked(-1 to end): ");
        scanf("%f", &hours_worked);

    }

    return 0;
}// end of function main
