/*

    Exercise : 13.16
    Description :
    Programmer : Emmanuel Mbonza Mayambi
    Email : emmanuelmbonza@outlook.com
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int counter=0;
    float gallons;
    float miles;
    float average;
    float total=0;

    while(gallons != -1){
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
        if(gallons == -1){
            break;
        }
        printf("Enter the miles driven: ");
        scanf("%f", &miles);

        counter++;

        average= miles/gallons;
        printf("The miles/gallons for this tank was %f.\n\n", average);

        total = total + average;
    }

    average= (float)total/counter;
    printf("The overall average miles/gallons was %f\n", average);

    return 0;
}// end of function main
