//
// Created by hp on 6/25/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;

    do
    {
        printf("Nhap vao kich thuoc mang");
        scanf("%d", &n);

    }while (n <= 0);
    arr = (int *)malloc(n * sizeof(int));
    printf("Nhap vao mang");
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao so thu %d", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang la %d", max);
    free(arr);
    return 0;
}