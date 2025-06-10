#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<=n && arr[l]>arr[largest])
    {
        largest =l;
    }
    if(r<=n && arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        heapify(arr,n,i);
    }
    for(i=n;i>=2;i--)
    {
        swap(&arr[1],&arr[i]);
        heapify(arr,i-1,1);
    }
}

int main()
{
    int n,i;
    printf("enter the numebr of elements");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter the elements");
    for(i=1;i<=n;i++)
    {
        printf("\nenter element");
        scanf("%d",&arr[i]);
    }
    heapsort(arr,n);
    printf("after sorting");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
    
}