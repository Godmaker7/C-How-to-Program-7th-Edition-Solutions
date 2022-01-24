/*
    C Program : Body Mass Index Calculator
    Exercise : 2.32
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    double weight;
    double height;
    double bmi;

    printf("\n\tWelcome to the Body Mass Index(BMI) Calculator\n");
    printf("\t**********************************************");

    printf("\n Enter your weight (in kilograms) : ");
    scanf("%lf", &weight);

    printf(" Enter your height (in meters) : ");
    scanf("%lf", &height);

    //BMI Calculations
    bmi = (weight / (height * height));
    printf("\n Your BMI is %.1lf\n", bmi);

    printf("\n ---------------------------------");
    printf("\n BMI VALUES\n");
    printf(" Underweight : less than 18.5\n");
    printf(" Normal      : between 18.5 and 24.9\n");
    printf(" Overweight  : between 25 and 29.9\n");
    printf(" Obese       : 30 or greater\n");
    printf(" ---------------------------------\n");

    return 0;
}// end of function main

