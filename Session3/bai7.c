//
// Created by hp on 6/24/2025.
//
#include <stdio.h>
#include <stdlib.h>

int tinhTongHang(int **arr, int cols, int rowsIndex)
{
    int sum = 0;
    for (int i = 0; i < cols; i++)
    {
        sum += arr[rowsIndex][i];
    }
    return sum;
}

int main()
{
    int rows, cols, k;
    int **arr;

    printf("Nhap so hang : ");
    scanf("%d", &rows);
    printf("Nhap so cot : ");
    scanf("%d", &cols);

    if (rows <= 0 || rows >= 1000 || cols <= 0 || cols >= 1000)
        {
            printf("So hang hoac so cot khong hop le!\n");
            return 1;
        }
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    printf("Nhap vao cac phan tu\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Nhap vao hang muon tinh tong");
    scanf("%d", &k);

    if (k < 0 || k >= rows)
    {
        printf("So hang muon tinh tong hop le!\n");
    }else
    {
        int sum = tinhTongHang(arr, cols, k);
        printf("Tong cua hang %d la %d",k , sum);
    }

    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}