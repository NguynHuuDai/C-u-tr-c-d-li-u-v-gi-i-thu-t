//
// Created by hp on 6/17/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, target;
    int found = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Nhap vao so nguyen: ");
    scanf("%d", &target);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("cap tim thay %d + %d ", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("Khong tim thay cap so nao");
        }
    }
    free(arr);
    return 0;
}