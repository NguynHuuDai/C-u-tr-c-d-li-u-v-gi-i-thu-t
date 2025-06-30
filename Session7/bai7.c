//
// Created by hp on 6/30/2025.
//
#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");
}

void customSort(int arr[], int n)
{
    int temp[n];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[index++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            temp[index++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            temp[index++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int n;
    printf("Nhap vao so luong phan tu:");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000)
    {
        printf("So luong khong hop le");
        return 1;
    }
    int arr[n];
    printf("Nhap vao cac phan tu:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("before :");
    printArray(arr, n);
    customSort(arr, n);
    printf("\n");
    printf("after :");
    printArray(arr, n);

    return 0;
}