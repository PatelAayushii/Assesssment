#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],mul[100][100],i,j,k,row,col;
 
    printf("\n enter the row = ");
    scanf("%d",&row);
    printf("\n enter the col = ");
    scanf("%d",&col);
 
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n enter the element a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n enter the element b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            mul[i][j] = 0;
            for(k=0;k<col;k++)
            {
                mul[i][j] = mul[i][j] + (a[i][k]*b[k][j]);
            }

        }
    }
    printf("\n multiplication  = \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}