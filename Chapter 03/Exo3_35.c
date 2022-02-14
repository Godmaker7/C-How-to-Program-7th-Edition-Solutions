/*
    C Program : Printing the Decimal Equivalent of a Binary Number
    Exercise : 3.35
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    int integer;

    printf("\n   Enter the integer (containing only 0s and 1s) : ");
    scanf("%d", &integer);
    int binary;
    int factor = 1;
    int decimal_equivalent = 0;

    while(integer > 0) //do till integer greater than  0
    {
        int mod = integer % 10;  //split last digit from number

        binary = mod * factor;
        decimal_equivalent = decimal_equivalent + binary; //Calculation of the decimal equivalent
        factor*=2;

        integer = integer / 10;   //divide integer by 10.
    }

    puts("");//print a new line

    printf("   The decimal equivalent is : %d\n", decimal_equivalent);

    return 0;
}// end of function main
