//write a program to calculate the sum of two matrix 3X3.
#include"stdio.h"
int n = 3;
void first(int a[][n] , int n);
void second(int b[][n] , int n);
void third (int [][n] ,int [][n] ,int c[][n]);
int main()
{
   int a[n][n], b[n][n], c[n][n];
   first( a,n);
   second(b,n);
   third(a,b,c);

   return 0; 
}
void first(int a[][n],int n)
{
   int i,j;
   printf("Enter 9 first matrix of number ");
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
}
void second(int b[][n],int n)
{
   int i,j;
   printf("Enter 9 second matrix of number ");
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&b[i][j]);
      }
   }
}
void third(int a[][n] ,int b[][n], int c[][n])
{
   int i,j;
   printf("sum of two matrix is\n");
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         c[i][j]=a[i][j]+b[i][j];
         printf(" %d ",c[i][j]);
      }
      printf("\n");
   }
}