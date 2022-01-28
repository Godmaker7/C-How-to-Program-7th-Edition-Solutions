/*
    C Program : Interest Calculator
    Exercise : 3.19
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/
#include <stdio.h>

//function main begins program execution
int main()
{

    float principal_loan;
    float interest_rate;
    float days;
    float charge;

    printf("\n  Enter loan principal(-1 to end): ");
    scanf("%f", &principal_loan);

    while ( principal_loan != -1 ){

        printf("  Enter interest rate: ");
        scanf("%f", &interest_rate);

        printf("  Enter term of the loan in days: ");
        scanf("%f", &days);

        charge = ( principal_loan * interest_rate * days ) / 365; //Calculation of the interest charge

        printf("  The interest charge is $%.2f\n\n", charge);

        printf("\n  Enter loan principal(-1 to end): ");
        scanf("%f", &principal_loan);

    }

    return 0;
}// end of function main
