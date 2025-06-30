//
// Created by hp on 6/30/2025.
//
#include <stdio.h>

void sapxep(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    }while(n < 1 || n > 1000);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("before  ");
    printArray(arr, n);
    sapxep(arr, n);
    printf("after   ");
    printArray(arr, n);
    return 0;
}