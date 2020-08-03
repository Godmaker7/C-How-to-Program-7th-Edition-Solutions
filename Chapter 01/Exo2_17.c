/*
    C Program : Printing values with printf
    Exercise : 2.17
    Description : Write a program that prints the numbers 1 to 4 on the same line.
                  Write the program using the following methods:
                  a) Using one printf statement with no conversion specifiers.
                  b) Using one printf statement with four conversion specifiers.
                  c) Using four printf statements.
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

int main()
{
    int a, b, c, d;

    //a)//
    printf("1 2 3 4");

    a = 1;
    b = 2;
    c = 3;
    d = 4;

    //b)//
    printf("\n%d %d %d %d", a, b, c, d);

    //c)//
    printf("\n1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");

    return 0;
}
