#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int rows , columns , counter_r , counter_c;                   //Deceleration of number of rows , counter of rows and counter of columns
    do                                                                     //to prevent user from entering negative or zero values
    {
        printf("please enter number of rows\n");
        scanf("%i",&rows);
        printf("please enter number of columns\n");
        scanf("%i",&columns);
    }
    while(rows <= 1 || columns <=1);
    for(counter_r = 1 ; counter_r <= rows ; counter_r++)                                        //outer loop
    {
        for(counter_c = 1 ; counter_c <= columns ; counter_c++ )                                //inner loop
        {
            if(counter_r == 1 || counter_r == rows || counter_c == 1 || counter_c == columns)   //if we are the first row or in the last or in the first column or in the last row or column we will write *
            {
                printf("*");
            }
            else                                                                                // we are in the middle rows or columns we will write space
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
