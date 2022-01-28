/*
    C Program : Printing Numbers from a Loop
    Exercise : 3.22
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    int number;
    number = 1;
    int first = 1;
    int second = 2;

    puts(""); //print a new line

    while ( number <= 10 ) {

        // This if else statement is here for a beautiful display of the column
        if ( number <= 5 ){
            printf("   %d    %d", first, second);
        } else {
            printf("  %d    %d", first, second);
         }

         puts(""); //print a new line

        first = first + 2;
        second = second + 2;

        number++; //incrementing number by one
    }


    return 0;
}// end of function main

