/*
    C Program : Find The Smallest Number
    Exercise : 3.23
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{

    int counter = 0;
    int number;
    int smallest;

    while( counter < 21 ){
        printf("  Enter the number : ");
        scanf("%d", &number);

        smallest = number;

        if ( smallest > number ){
            smallest = number;
        }

        counter++;

    }

    printf("\n  The smallest number is %d\n", smallest);

    return 0;
}// end of function main
