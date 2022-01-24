/*
    C Program : Table of Squares and Cubes
    Exercise : 2.31
    Description : Using only the techniques you learned in this chapter,
                  write a program that calculates the squares and cubes
                  of the numbers from 0 to 10 and uses tabs to print the
                  following table of values :

                        number  square  cube
                        0       0       0
                        1       1       1
                        2       4       8
                        3       9       27
                        4       16      64
                        5       25      125
                        6       36      216
                        7       49      343
                        8       64      512
                        9       81      729
                        10      100     1000

    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/
#include <stdio.h>

//function main begins program execution
int main()
{

    printf("\n\t number\t square\t cube");
    printf("\n\t 0\t %d\t %d", 0*0, 0*0*0);
    printf("\n\t 1\t %d\t %d", 1*1, 1*1*1);
    printf("\n\t 2\t %d\t %d", 2*2, 2*2*2);
    printf("\n\t 3\t %d\t %d", 3*3, 3*3*3);
    printf("\n\t 4\t %d\t %d", 4*4, 4*4*4);
    printf("\n\t 5\t %d\t %d", 5*5, 5*5*5);
    printf("\n\t 6\t %d\t %d", 6*6, 6*6*6);
    printf("\n\t 7\t %d\t %d", 7*7, 7*7*7);
    printf("\n\t 8\t %d\t %d", 8*8, 8*8*8);
    printf("\n\t 9\t %d\t %d", 9*9, 9*9*9);
    printf("\n\t 10\t %d\t %d\n", 10*10, 10*10*10);

    return 0;
}// end of function main
