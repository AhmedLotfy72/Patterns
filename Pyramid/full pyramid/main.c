#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int i,j,space,length;                                //Deceleration of the length of the pyramid and other counters

    do
    {
        printf("Please enter the length of the pyramid:");
        scanf("%u",&length);
    }
    while(length<=1);                                      //to prevent user from entering length <=1
    for(i=1;i<=length;i++)                                 //Control length of the pyramid
    {
        for(space=length ; space>i ; space--)                           // control number of spaces in each row
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)                                   //To control columns of the pyramid
        {
            printf("* ");
        }
        printf("\n");                                       //When finish every row make new line
    }
    return 0;
}
