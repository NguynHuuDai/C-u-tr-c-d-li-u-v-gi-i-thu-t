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

    int x;
    printf("Nhap vao phan tu muon tim");
    scanf("%d", &x);

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] == x)
        {
            printf("Phan tu muon tim o vi tri %d", i);
        }
    }

    free(arr);
    return 0;
}