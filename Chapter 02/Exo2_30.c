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

    puts("");//print a new line

    while(integer > 0) //do till integer greater than  0
    {
        int mod = integer % 10;  //split last digit from number
        printf("%d   ",mod); //print the digit.

        integer = integer / 10;    //divide integer by 10.
    }

    return 0;
}//end of function main
