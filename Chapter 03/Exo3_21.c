/*
    C Program : Preincrementing vs Postincrementing
    Exercise : 3.21
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    int a, b;
    a= 5;
    b = 5;

    printf("\n  %d", a++);    //Preincrementing
    printf("\n  %d\n", ++b);  //Postincrementing

    return 0;
}// end of function main
