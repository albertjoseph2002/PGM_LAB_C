#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter rows and cloumns");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("enter elements in the square matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter elemnt of row %d and column %d",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    printf("\n row sum is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];   
        }
        printf("\nrow sum of row %d  is %d",i,sum);
        sum=0;
    }
    int colsum=0;
    printf("\ncoloumn sum is \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            colsum=colsum+arr[i][j];
        }
        printf("\ncoloun sum of coloumn %d is %d",i,colsum);
        colsum=0;
    }
    return 0;

}