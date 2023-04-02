//3. Write a program in C to find the transpose of given matrix.
#include"stdio.h"
int main()
{
    int a[3][3],trans[3][3],i,j;
    printf("Enter 9 number of matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }
    printf(" matrix \n");
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
            trans[j][i] = a[i][j];
        }
    }
    printf("Transpose matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
