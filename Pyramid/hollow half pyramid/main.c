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


    for(Counter_rows = 1 ; Counter_rows<= length ; Counter_rows++)  //LOOP that deal with rows
    {
        for(Counter_columns = 1 ; Counter_columns <= Counter_rows ; Counter_columns++) //Loop to deal with columns
        {
            if(Counter_rows == 1 || Counter_rows == length || Counter_columns == 1 || Counter_columns == Counter_rows) //If we at the first row or at the last row or at the first column or at the last column
            {
                printf("%i ",Counter_columns);                  // print number of column that we are at
            }
            else
            {
                printf("  ");                                   // print two spaces instead of the number of column and space to save the sequence
            }
        }
        printf("\n");                                       // when finishing every row make new line to start a new row
    }



    return 0;
}
