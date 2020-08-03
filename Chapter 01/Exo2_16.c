/*
    C Arithmetic Program
    Exercise : 2.16
    Description : Write a program that asks the user to enter two numbers,
                  obtains them from the user and prints their sum, square of the sum,
                  difference, square of the difference and cube of the difference.
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int sum, square_sum, cube_sum, difference, square_difference, cube_difference;

    printf("\n\t\t\t A Little Arithmetic\n");

    printf("\n Enter the first number: ");
    scanf("%d", &num1);

    printf(" Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("\n The sum is : %d\n", sum);

    square_sum = sum * sum;
    printf(" The square of the sum is: %d\n", square_sum);

    cube_sum = sum * sum * sum;
    printf(" The cube of the sum is: %d\n", cube_sum);

    difference = num1 - num2;
    printf("\n The difference is : %d\n", difference);

    square_difference = difference * difference;
    printf(" The square of the difference is: %d\n", square_difference);

    cube_difference = difference * difference * difference;
    printf(" The cube of the difference is: %d\n", cube_difference);

    return 0;
}
