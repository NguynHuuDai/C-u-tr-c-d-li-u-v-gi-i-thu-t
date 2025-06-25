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
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao so thu %d", i + 1);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            printf("So nho nhat dau tien nam o vi tri %d", i);
            break;
        }
    }
    free(arr);
    return 0;
}