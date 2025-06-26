//
// Created by hp on 6/26/2025.
//
#include <stdio.h>
#include <stdlib.h>

int tinhTong(int arr[], int n)
{
    if (n == 0)

        return 0;
        return (arr[n - 1] + tinhTong(arr, n - 1));

}
int main()
{
    int n;
    int *arr;
    do
    {
        printf("Enter size of array: ");
        scanf("%d", &n);
    }while (n < 1);
    arr = (int *)malloc(n * sizeof(int));
    printf("Nhap vao cac phan tu\n");
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int tong = tinhTong(arr, n);
    printf("Tong: %d\n", tong);

    free(arr);
    return 0;

}