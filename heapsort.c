#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxheapify(int arr[], int n, int i) {
    int largest = i;          
    int l = 2 * i;            
    int r = 2 * i + 1;        

    if (l <= n && arr[l] > arr[largest])
        largest = l;

    if (r <= n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(&arr[largest], &arr[i]);
        maxheapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n) {
    for (int i = n / 2; i >= 1; i--)
        maxheapify(arr, n, i);

    for (int i = n; i >= 2; i--) {
        swap(&arr[1], &arr[i]);

        maxheapify(arr, i - 1, 1);
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // Use n + 1 to account for 1-based indexing

    printf("\nEnter the elements:\n");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    heapsort(arr, n);

    printf("\nAfter heap sort:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
