/*
    C Program : Gas Mileage
    Exercise : 3.17
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    int account;
    float balance;
    float total_items_charges;
    float total_credits;
    float limit;
    float new_balance;

    printf("\n  Enter account number (-1 to end): ");
    scanf("%d", &account);

    while ( account != -1 ){

        printf("  Enter beginning balance: ");
        scanf("%f", &balance);

        printf("  Enter total charges: ");
        scanf("%f", &total_items_charges);

        printf("  Enter total credits: ");
        scanf("%f", &total_credits);

        printf("  Enter credit limit: ");
        scanf("%f", &limit);

        new_balance = balance + total_items_charges - total_credits; //Calculation of the new balance

        //if new balance exceeded the limit we will print these
        if( new_balance > limit ){
            printf("\n  Account :\t  %d\n", account);
            printf("  Credit limit :  %.2f\n", limit);
            printf("  Balance :\t  %.2f\n", new_balance);
            printf("  Credit Limit Exceeded.\n");
        }

        printf("\n  Enter account number (-1 to end): ");
        scanf("%d", &account);
    }


    return 0;
}// end of function main
