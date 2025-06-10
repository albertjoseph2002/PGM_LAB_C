#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n,i=1;
    printf("enter the numebr of elemnets");
    scanf("%d",&n);
    int arr[n];
    
    while(i<=n)
    {
        printf("enter element");
        scanf("%d",&arr[i]);
        i++;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d",arr[i]);
    }
    swap(&arr[1],&arr[n]);
    printf("\n\nafter swapping");
    for(i=1;i<=n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}