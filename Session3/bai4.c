//
// Created by hp on 6/20/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int **arr;

    do
    {
        printf("Nhap vao so hang :");
        scanf("%d", &n);
        printf("Nhap vao so cot cua mang:");
        scanf("%d", &m);

        if (n <= 0 && m <= 0 )
        {
            printf("So hang va cot khong hop le");
        }else if (n <= 0)
        {
            printf("So hang khong hop le");
        }else if (m <= 0)
        {
            printf("So cot khong hop le");
        }
    }while (n <= 0 || m <= 0);
    arr = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int*)malloc(m*sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Nhap phan tu arr[%d][%d] : ", i , j );
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("Max: %d \n", max);
    printf("Min: %d", min);
    return 0;
}