/*
    C Program : Tabular Output
    Exercise : 3.25
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    int n = 9;

    printf("\n  N\t N-3\t N+3\t N*3\n");

    while ( n <= 45 ) {

        printf("\n  %d\t %d\t %d\t %d", n, n-3, n+3, n*3);

        n += 9; // incrementation of n by 9

    }

    puts(""); //print a new line

    return 0;
}// end of function main

