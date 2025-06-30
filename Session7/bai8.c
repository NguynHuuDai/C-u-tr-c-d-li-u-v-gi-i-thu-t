//
// Created by hp on 6/30/2025.
//
#include <stdio.h>

void printMatrix(int arr[][1000], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void sortColumn(int arr[][1000], int rows, int k)
{
    for (int i = 0; i < rows -1; i++)
    {
        for (int j = i + 1; j < rows; j++)
        {
            if (arr[i][k] > arr[j][k])
            {
                int temp = arr[i][k];
                arr[i][k] = arr[j][k];
                arr[j][k] = temp;
            }
        }
    }
}
int main()
{
    int rows, cols;
    printf("Nhap so hang (0 < rows < 1000): ");
    scanf("%d", &rows);
    printf("Nhap so cot (0 < cols < 1000): ");
    scanf("%d", &cols);

    if (rows <= 0 || rows >= 1000 || cols <= 0 || cols >= 1000) {
        printf("So hang hoac cot khong hop le!\n");
        return 1;
    }
    int arr[1000][1000];
    printf("Nhap cac phan tu: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    printf("Nhap cot muon sap xep");
    scanf("%d", &k);

    if (k < 0 || k >= cols)
    {
        printf("So cot khong hop le!\n");
        return 1;
    }

    sortColumn(arr, rows, k);
    printf("Ma tran sau khi xep");
    printMatrix(arr, rows, cols);

    return 0;
}