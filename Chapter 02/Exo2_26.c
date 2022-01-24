/*
    C Program : Multiples
    Exercise : 2.26
    Description : Write a program that reads in two integers and determines
                  and prints whether the first is a multiple of the second.[Hint : use the remainder operator.]
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    int integer1;
    int integer2;

    printf("\n  Enter the first integer : ");
    scanf("%d", &integer1);

    printf("  Enter the second integer : ");
    scanf("%d", &integer2);

    //check if the first integer is multiple of the second
    if( integer1 % integer2 == 0){
        printf("\n  the first integer(%d) is an multiple of the second integer integer(%d)", integer1, integer2);
    }

    if( integer1 % integer2 != 0){
        printf("\n  the first integer(%d) is not an multiple of the second integer(%d)\n", integer1, integer2);
    }

    return 0;
}//end of function main
