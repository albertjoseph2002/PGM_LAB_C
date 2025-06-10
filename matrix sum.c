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
            colsum=colsum+arr[j][i];
        }
        printf("\ncoloun sum of coloumn %d is %d",i,colsum);
        colsum=0;
    }
    printf("\ndiagonal sum is \n");
    
    int dsum=0;
    int d2sum=0;
    for(i=0;i<r;i++)
    {
        dsum=dsum+arr[i][i];
        d2sum=d2sum+arr[i][r-i-1];
    }
    printf("\n\n1st diagonal sum is %d and second diagonal sum is %d ",dsum,d2sum);


    return 0;

}