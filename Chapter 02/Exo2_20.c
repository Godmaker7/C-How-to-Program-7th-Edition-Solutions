/*
    C Area and Perimeter of a Square Program
    Exercise : 2.20
    Description : Write a program that reads in the side of a square
                  and prints the square's area and perimeter.
                  Perform each of these calculations inside the printf statment(s).
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    int side;

    //Getting the side of square from user
    printf("\n  Enter the side of the square : ");
    scanf("%d", &side);

    printf("  The Area of Square is %d\n", side * side);     //Area of Square calculation
    printf("  The Perimeter of Square is %d\n", 4 * side);   //Perimeter of Square calculation


    return 0;
}//end of function main
