/*
    C Program : Largest and Smallest Integers
    Exercise : 2.23
    Description : Write a program that reads in three integers and then determine
                  and prints the largest and the smallest integers in the group.
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf(" Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //find the Smallest//
    if(num1 < num2){
        if(num1 < num3){
            printf("\n Smallest is %d\n", num1);
        }
    }
    if(num2 < num1){
        if(num2 < num3){
            printf("\n Smallest is %d\n", num2);
        }
    }
    if(num3 < num1){
        if(num3 < num2){
            printf("\n Smallest is %d\n", num3);
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
}
