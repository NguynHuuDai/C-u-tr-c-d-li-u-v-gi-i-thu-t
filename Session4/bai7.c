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
        printf("Nhap vao so luong phan tu: \n");
        scanf("%d", &n);
    }while(n < 1 );
    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d : \n", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] == arr[n - 1 -i])
        {
            printf("Cap doi xung (%d,%d)\n", arr[i], arr[n - 1 -i]);
        }
    }
    free(arr);
    return 0;
}