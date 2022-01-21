/*
    C Program : Comparing Integers
    Exercise : 2.18
    Description : Write a program that asks the user to enter the length and breadth of a rectangle and obtains the numbers from the user.
                  If the length and the breadth are equal, print the message "It is a Square"
                  else print the message "It is not a Square".
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    int length;
    int breadth;

    printf("Enter the length : ");
    scanf("%d", &length);

    printf("Enter the breadth : ");
    scanf("%d", &breadth);

    if(length == breadth){
        printf("It is a Square\n");
    }
    if(length != breadth){
        printf("It is not a Square\n");
    }

    return 0;
}//end of function main
