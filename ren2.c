//write a program to display the cross product of two set specified by the user
#include<stdio.h>
int main()
{
    int i=0,j,k=0;
    int A[]={1,3,5,7,9};
    int B[]={2,3,4,5,6,8,10};
    printf("Cross product of given sets is:\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<7;j++)
        {
            printf("(%d,%d), ",A[i],B[j]);

        }
    }
    return 0;
    
}