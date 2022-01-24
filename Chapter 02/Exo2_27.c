/*
    C Program : Pyramid Pattern of Asterisks
    Exercise : 2.27
    Description : Display the following pyramid pattern with five printf statments
                  and then display the same pattern using a single printf statment.
                                               *
                                              ***
                                             *****
                                            *******
                                           *********
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    puts("");//print a new line

    //pattern with five print statements
    printf("\t     *\n");
    printf("\t    ***\n");
    printf("\t   *****\n");
    printf("\t  *******\n");
    printf("\t *********\n\n");

    //pattern with one print statements
    printf("\t     *\n\t    ***\n\t   *****\n\t  *******\n\t *********\n");

    return 0;
}// end of function main

