//
// Created by hp on 6/17/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i, n, temp;

    printf("nhap so phan tu: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Malloc Error");
        return 1;
    }
    printf("nhap vao gia tri\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 -i];
        arr[n - 1 -i] = temp;
    }

    printf("mang sau khi dao la ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}