#include <stdio.h>
#include <stdlib.h>

int main()
{


                                                /*Deceleration of variables*/


    signed int length;                          //TO store the length of the pyramid
    signed int Counter_rows , Counter_columns;  //TO deal with rows and columns


                                                /*Ask user to enter length of the pyramid  // using do_while to prevent user from entering zeros or negative numbers*/


    do
    {
        printf("Please enter length of the pyramid: ");    //Entering the length of the pyramid
        scanf("%i",&length);
    }while(length <=0);



                                                /*Code logic*/


    for(Counter_rows = 1 ; Counter_rows <= length ; Counter_rows++)  //LOOP that deal with rows
    {
        for(Counter_columns = 1 ; Counter_columns <= (length-Counter_rows)+1 ; Counter_columns++) //Loop to deal with columns
        {
            printf("%i ",Counter_columns);                  // at every column print the number of the column starting from 1
        }
        printf("\n");                                       // when finishing every row make new line to start a new row
    }



    return 0;
}
