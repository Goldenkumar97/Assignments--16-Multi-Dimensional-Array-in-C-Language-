//4. Write a program in C to find the sum of right diagonals of a matrix.
#include"stdio.h"
int main()
{
    int a[3][3],i,j;
    int sum=0;
    printf(" Enter 9 number of matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of right diagonals matris is =%d",sum);
return 0;
}