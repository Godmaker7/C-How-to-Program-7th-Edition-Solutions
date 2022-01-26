/*
    C Program : Gas Mileage
    Exercise : 3.16
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    float gallons;
    float miles;
    float miles_per_gallon;
    float average;
    float total;

    //Initialization of variables average and total
    float average = 0;
    float total = 0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);

    while ( gallons != -1 ){

        printf("Enter the miles driven : ");
        scanf("%f", &miles);

        miles_per_gallon = miles/gallons;
        printf("The miles/gallon for this tank was %f\n\n", miles_per_gallon);
        total = total + 1;
        average = average + miles_per_gallon;

        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);

    }

    average = average / total; //Calculation of overall average miles per gallon
    printf("The overall average miles/gallon was %f\n", average);

    return 0;
}// end of function main
