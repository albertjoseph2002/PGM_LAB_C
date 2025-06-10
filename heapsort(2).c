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
        largest=l;
    }
    if(r<=n && arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(&arr[i],&arr[largest]);
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
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    int i,arr[n+1];
    printf("\nenter elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    heapsort(arr,n);
    printf("after sorting");
    for(i=1;i<=n;i++)
    {
        printf("%d,",arr[i]);
    }
    int high=n,low=1;
    int mid;
    int s,found=0;
    printf("\nenter element to search");
    scanf("%d",&s);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==s)
        {
            printf("element found at %d",mid);
            found=1;
            break;
        }
        else if(s < arr[mid])
        {
            
                high=mid+1;
        }
        else if(s > arr[mid])
            {
                low=mid+1;
            }
    }
    if(found==0)
    {
        printf("\nelement not found");
    }
    return 0;
}