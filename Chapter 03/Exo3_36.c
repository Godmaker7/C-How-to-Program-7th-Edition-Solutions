/*
    C Program : How Fast is Your Computer ?
    Exercise : 3.36
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    int n = 0;

    while( n <= 1000000000){
        if( n == 100000000){
            printf("\n  100,000,000");
        }
        if( n == 200000000){
            printf("\n  200,000,000");
        }
        if( n == 300000000){
            printf("\n  300,000,000");
        }
        if( n == 400000000){
            printf("\n  400,000,000");
        }
        if( n == 500000000){
            printf("\n  500,000,000");
        }
        if( n == 600000000){
            printf("\n  600,000,000");
        }
        if( n == 700000000){
            printf("\n  700,000,000");
        }
        if( n == 800000000){
            printf("\n  800,000,000");
        }
        if( n == 900000000){
            printf("\n  900,000,000");
        }
        if( n == 1000000000){
            printf("\n  1,000,000,000\n");
        }
        n++;
    }

    return 0;
}// end of function main
