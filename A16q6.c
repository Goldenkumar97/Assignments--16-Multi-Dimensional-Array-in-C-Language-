//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include"stdio.h"
int   main()
{
    int a[3][3],i,j;
    printf("Enter 9 number of matrix ");
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
        int sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];  
        }
        printf("sum of row is =%d \n" ,sum);
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
       int  sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
        printf("sum of column is =%d\n",sum);
    }
return 0;
}