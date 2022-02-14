/*
    C Program : Palindrome Tester
    Exercise : 3.34
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>

//function main begins program execution
int main()
{
    int integer;
    int original;
    int remainder;
    int reversed;

    printf("\n  Enter the integer : ");
    scanf("%d", &integer);

    original = integer;

    while (integer != 0) {
        remainder = integer % 10;
        reversed = reversed * 10 + remainder;
        integer = integer / 10;
    }

    if (original == reversed){
        printf("  %d is a palindrome.\n", original);
    }
    else{
        printf("  %d is not a palindrome.\n", original);
    }

    return 0;
}// end of function main
