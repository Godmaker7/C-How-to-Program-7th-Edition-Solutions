/*
    C Program : Odd or Even
    Exercise : 2.24
    Description : Write a program that reads an integer and determine and prints whether it's odd or even.
                  [Hint: Use the remainder operator. An even number is a multiple of two.
                   Any multiple of two leaves a remainder of zero when divided by 2.]
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    printf("\n\t\t #ODD or EVEN#\n");

    int number;

    printf("\n Enter an integer: ");
    scanf("%d", &number);

    if( number % 2 == 0 ){
        printf(" %d is Even.\n", number);
    }
    if( number % 2 != 0 ){
        printf(" %d is Odd.\n", number);
    }

    return 0;
}//end of function main
