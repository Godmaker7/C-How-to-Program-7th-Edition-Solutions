/*
    C Program : Arithmetic, Largest Value and Smallest Value
    Exercise : 2.19
    Description : Write a program that inputs three different integers from the keyboard,
                  then prints the sum, the average, the product, the smallest and the largest of these numbers.
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program executiom
int main()
{
    int num1, num2, num3;
    int sum;
    int average;
    int product;

    printf(" Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf(" Sum is %d\n", sum);

    average = sum / 3;
    printf(" Average is %d\n", average);

    product = num1 * num2 * num3;
    printf(" Product is %d\n", product);

    //find the Smallest//
    if(num1 < num2){
        if(num1 < num3){
            printf(" Smallest is %d\n", num1);
        }
    }
    if(num2 < num1){
        if(num2 < num3){
            printf(" Smallest is %d\n", num2);
        }
    }
    if(num3 < num1){
        if(num3 < num2){
            printf(" Smallest is %d\n", num3);
        }
    }

    //Find the largest//
    if(num1 > num2){
        if(num1 > num3){
            printf(" Largest is %d\n", num1);
        }
    }
    if(num2 > num1){
        if(num2 > num3){
            printf(" Largest is %d\n", num2);
        }
    }
    if(num3 > num1){
        if(num3 > num2){
            printf(" Largest is %d\n", num3);
        }
    }

    return 0;
}//end of function main
