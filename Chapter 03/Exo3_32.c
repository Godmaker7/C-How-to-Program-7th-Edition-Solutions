/*
    C Program : Rectangle of Plus Symbols
    Exercise : 3.32
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    int length;
    int breadth;
    int FirstCounter = 0;
    int SecondCounter = 0;

    printf("\n  Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("  Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    printf("\n  ");//print a new line

    //first loop for breadth value
    while( FirstCounter != breadth ){

        //second loop for length value inside the first loop of breadth
        while( SecondCounter != length ){
            printf("+");

            SecondCounter++;
        }
        printf("\n  ");
        SecondCounter = 0;
        FirstCounter++;
    }


    puts("");//print a new line

    return 0;
}// end of function main
