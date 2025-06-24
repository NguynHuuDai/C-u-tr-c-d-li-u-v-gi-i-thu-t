//
// Created by hp on 6/24/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int *arr;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    printf("Nhap %d phan tu cua mang:\n ", n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vao so phan tu muon them");
    scanf("%d", &m);
    int *newArr = (int*)realloc(arr, (m + n) * sizeof(int));
    arr = newArr;
    for (int i = 0; i < m; i++)
    {
        printf("Nhap vao phan tu %d : ", n+1);
        scanf("%d", &arr[n + i]);
    }
    printf("Mang sau khi them");
    for (int i = 0; i < n + m; i++)
    {
        printf(" %d : ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;

}