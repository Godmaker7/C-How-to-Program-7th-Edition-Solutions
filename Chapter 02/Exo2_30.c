/*
    C Program : Separating Digits in an Integer
    Exercise : 2.30
    Description : Write a program which inputs one five-digit number,
                  separates the number into its individual digits, and
                  prints the digits separated from one another by three
                  spaces each.
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    int integer;

    printf("\n  Enter the integer : ");
    scanf("%d", &integer);

    int firstDigit = integer / 10000 % 10;
    int secondDigit = integer / 1000 % 10;
    int thirdDigit = integer / 100 % 10;
    int fourthDigit = integer / 10 % 10;
    int fifthDigit = integer % 10;

    printf("\n  %d   %d   %d   %d   %d\n", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);

    return 0;
}//end of function main
