//Write a program to calculate the product of two matrix each matrix of 3x3.
#include"stdio.h"
int n=3;
void multiple (int a[][n],int n);
void product (int b[][n],int n);
void result(int a[][n], int b[][n],int c[][n],int n);
int main()
{
int a[n][n],b[n][n],c[n][n];
multiple(a,n);
product(b,n);
result(a,b,c,n);
return 0;
}
void multiple(int a[][n] , int n )
{
    int i,j;
    printf("Enter first 9 number of matrix ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void product(int b[][n] , int n)
{
    int i,j;
    printf("Enter second 9 number of matrix ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
}
void result (int a[][n],int b[][n],int c[][n],int n)
{
    int i,j,k;
    int sum;
    printf(" Products of two matrix is = \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        sum=0;
        for(k=0;k<n;k++)
        {
            sum=sum+ a[i][k] * b[k][j];
        }
        c[i][j]=sum;
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}