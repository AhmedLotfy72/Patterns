#include <stdio.h>
#include <stdlib.h>

int main()
{


                                                                /*Deceleration of the variables*/


    signed int length;                                          //Deceleration of the length of the pyramid
    signed int rows;                                            //Deceleration of the variable that will control rows
    signed int space;                                           //Deceleration of the variable that will control the space until reaching the middle of the pyramid
    signed int space_counter;                                   //variable to count number of spaces
    signed int columns;                                         //Variable to control the columns
    signed int m;                                               //Variable that we will store in it the result of (length - space counter)
    signed int a;                                               //Variable to control the columns after the middle of the pyramid
    signed int f;


                                                                /*Ask the user to enter the length of the pyramid // and do while to prevent the user from entering zeros or negative numbers*/


    do
    {
        printf("please enter the length of the pyramid:");
        scanf("%i",&length);
    }while(length <= 0);


                                                                /*code logic*/


    for(rows=1 ; rows<=length ; rows++)                         //Looping on the rows
    {
        space_counter = 0;
        for(space=rows ; space<length ; space++)                            //Looping on the space until reaching the middle of the pyramid
        {
            printf("  ");                                        //Print space until reaching the middle of the pyramid
            space_counter++;                                    //increase counter of spaces after print space
        }
        m = length - space_counter;
        for(columns=rows ; m-- ; columns++)            //Looping on the columns
        {
            printf("%i ",columns);
        }
        f = rows;
        for(a =columns-2 ; --f ; a--)
        {
            printf("%i ",a);
        }

        printf("\n");

    }

    return 0;
}
