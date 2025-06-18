//
// Created by hp on 6/17/2025.
//
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, m;

    printf("Nhap kich thuoc ban muon tao mang");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    printf("Nhap vao mang");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Mang hien tai la");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Nhập vào vị trí muốn xóa");
    scanf("%d", &m);

    for (int i = m; i < n -1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Mang sau khi xoa la");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
