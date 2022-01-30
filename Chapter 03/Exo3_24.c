/*
    C Program : Tabular Output
    Exercise : 3.24
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    float n = 10;

    printf("\n  N\t\t 0.25*N\t\t 0.50*N\t\t 0.75*N\n");

    while ( n <= 100 ) {

        printf("\n  %f\t %f\t %f\t %f", n, 0.25*n, 0.50*n, 0.75*n);

        n += 10; // incrementation of n by 10

    }

    puts(""); //print a new line

    return 0;
}// end of function main

