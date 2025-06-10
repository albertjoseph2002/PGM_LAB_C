#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter rows and cols of 1st matrix");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and cols of 2nd matrix");
    scanf("%d%d",&r2,&c2);
    int m1[r1][c1];
    int m2[r2][c2];
    if(c1==r2)
    {
        printf("multiplication possible");
        int sum[r1][c2];
        int k,i,j;
        printf("\nenter elements of first matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("\nenter elements of second matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum[i][j]=0;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    sum[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        printf("after multiplication\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }


    }
}