#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int i,j;
    signed int length;                                   //Deceleration of the length of the pyramid
    do
    {
        printf("Please enter the length of the pyramid: ");
        scanf("%u",&length);
    }
    while(length<=1);                                      //to prevent user from entering length <=1
    for(i=length;i>=1;i--)                                 //Control length of the pyramid
    {
        for(j=i;j>=1;j--)                                   //To control columns of the pyramid
        {
            if(i == length || i == 1 || j == i || j == 1)   // If i in the first , last row , first column or last column print *
            {
                printf("*");
            }
            else
            {
                printf(" ");                                // if not print space
            }
        }
        printf("\n");                                       //When finish every row make new line

    }
    return 0;
}
