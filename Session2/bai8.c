//
// Created by hp on 6/17/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;

    printf("Nhap vao kich thuoc mang:");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Nhap vao gia tri");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int isLargest = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                isLargest = 0;
                break;
            }
        }
        if (isLargest)
        {
            printf("%d", arr[i]);
        }
    }
    free(arr);
    return 0;
}