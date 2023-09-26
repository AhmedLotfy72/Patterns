#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int rows , columns , counter_r , counter_c;             //Deceleration for number of rows , counter of rows and counter of columns
    do                                                               //TO Prevent user from entering negative or zero values
    {
        printf("please enter number of rows:\n");
        scanf("%u",&rows);
        printf("please enter number of columns:\n");
        scanf("%u",&columns);

    }
    while(columns <= 1 || rows <= 1);
    for(counter_r = 1 ; counter_r <= rows ; counter_r++)
    {
        for(counter_c = 1 ; counter_c <= columns ; counter_c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
