//7. Write a program in C to print or display an upper triangular of a given matrix.
#include"stdio.h"
int main()
{
    int a[3][3],i,j;
    printf("Enter 9 numbers of matrix ");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }  
    printf("matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            a[i][j]=0;
        }    
    }
    printf("upper triangular matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}