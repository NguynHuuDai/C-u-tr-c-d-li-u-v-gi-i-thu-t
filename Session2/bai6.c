//
// Created by hp on 6/17/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, m, addItems;

    printf("Nhap kich thuoc mang");
    scanf("%d", &n);

    arr = (int *)malloc((n +1) * sizeof(int));
    printf("nhap vao mang mang");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("nhap vao vi tri muon them");
    scanf("%d", &m);

    printf("nhap vao gia tri muon them");
    scanf("%d", &addItems);


    for (int i = n; i > m; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[m] = addItems;
    n++;

    printf("mang sau khi chen");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}