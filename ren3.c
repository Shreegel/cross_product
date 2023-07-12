//write a program to display the cross product of two set specified by the user
#include<stdio.h>
int main()
{
    int i=0,j,k=0;
    char A[]="xyz";
    char B[]="123";
    printf("Cross product of given sets is:\n");
    for (i=0;i<strlen(A);i++)
    {
        for (j=0;j<strlen(B);j++)
        {
            printf("(%c,%c), ",A[i],B[j]);
            }
    }
    return 0;
    
}