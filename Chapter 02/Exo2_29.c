/*
    C Program : Integer Value of a Character
    Exercise : 2.29
    Description : Write a C program that prints the integer equivalents of some uppercase letters,
                  lowercase letters, digits and special symbols. As minimum, determine the integer
                  equivalents of the following : A B C a b c 0 1 2 $ * + / and the blank character.
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    printf("\n\t  %d", 'A');
    printf("\n\t  %d", 'B');
    printf("\n\t  %d", 'C');
    printf("\n\t  %d", 'a');
    printf("\n\t  %d", 'b');
    printf("\n\t  %d", 'c');
    printf("\n\t  %d", '0');
    printf("\n\t  %d", '1');
    printf("\n\t  %d", '2');
    printf("\n\t  %d", '$');
    printf("\n\t  %d", '*');
    printf("\n\t  %d", '+');
    printf("\n\t  %d", '/');
    printf("\n\t  %d\n", ' ');//value of the blank character

    return 0;
}// end of function main

