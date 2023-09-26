#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int i,j,space,length;                            //Deceleration of the length of the pyramid
    do
    {
        printf("Please enter length of the pyramid: ");
        scanf("%u",&length);
    }
    while(length<=1);                                      //to prevent user from entering length <=1
    for(i=length;i>=1;i--)                                 //Control length of the pyramid
    {
        for(space=i ; space<length ; space++)                           //control space in  each row
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)                                   //To control columns of the pyramid
        {
            printf("* ");
        }
        printf("\n");                                       //When finish every row make new line
    }
    return 0;
}
