/*
    C Program : Detecting Multiples of 10
    Exercise : 2.37
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    int n = 1;

    puts("");//print a new line
    while( n <= 100 ){
        printf("*");
        if( n % 10 == 0 ){
            puts("");//print a new line
        }
        n++;
    }

    return 0;
}//end of function main
