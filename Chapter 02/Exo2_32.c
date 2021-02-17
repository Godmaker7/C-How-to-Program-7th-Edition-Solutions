/*
    C Program : Body Mass Index Calculator
    Exercise : 2.32
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

int main()
{
    int weight, height, bmi;

    printf("\n\tWelcome to the Body Mass Index(BMI) Calculator\n");
    printf("\t**********************************************");

    printf("\n Enter your weight (in kilograms) : ");
    scanf("%d", &weight);

    printf(" Enter your height: ");
    scanf("%d", &height);

    bmi = (weight / (height * height));
    printf("\n Your BMI is %d\n", bmi);

    if ( bmi < 18.5 ){
        printf(" You are Underweight\n");
    }
    else if ( bmi >= 18.5 ){
        printf(" You are Normal\n");
    }
    else if ( bmi <= 24.9 ){
        printf(" You are Normal\n");
    }
    else if ( bmi >= 25 ){
        printf(" You are Overweight\n");
    }
    else if ( bmi <= 29.9 ){
        printf(" You are Overweight\n");
    }
    else if( bmi >= 30 ){
        printf(" Obese\n");
    }

    return 0;
}
