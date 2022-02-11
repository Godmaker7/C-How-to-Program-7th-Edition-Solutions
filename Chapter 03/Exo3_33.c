/*
    C Program : Hollow Rectangle of Plus Symbols
    Exercise : 3.33
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

        FirstCounter++;//incrementing FirstCounter by one

        //print the first row of the hollow rectangle
        if ( FirstCounter == breadth / breadth ){
            while( SecondCounter != length ){
                    printf("+");
                    SecondCounter++;//incrementing SecondCounter by one
            }

        }
        //print the last row of the hollow rectangle
        if ( FirstCounter == breadth % 100 ){
            while( SecondCounter <= length ){
                    printf("+");
                    SecondCounter++;//incrementing SecondCounter by one
            }
        }
        //print the rows in between of the first and last of the hollow rectangle
        else {

            while( SecondCounter <= length ){

                //print on the first column of the hollow rectangle
                if( SecondCounter == 0 ){
                    printf("+");
                    SecondCounter++;//incrementing SecondCounter by one
                }
                //print on the last column of the hollow rectangle
                else if( SecondCounter == length % 100 ) {
                    printf("+");
                    SecondCounter++;//incrementing SecondCounter by one

                }
                //print the columns in between of the first and last of the hollow rectangle
                else {
                    printf(" ");
                    SecondCounter++;//incrementing SecondCounter by one
                }



            }

        }

        printf("\n  ");//print a new line
        SecondCounter = 0;//assign SecondCounter to 0

    }


    puts("");//print a new line

    return 0;
} // end of function main

