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
    for(i=1;i<=length;i++)                                 //Control length of the pyramid
    {
        for(j=1;j<=i;j++)                                   //To control columns of the pyramid
        {
            printf("*");
        }
        printf("\n");                                       //When finish every row make new line
    }
    return 0;
}
