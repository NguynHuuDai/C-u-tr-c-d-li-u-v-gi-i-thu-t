//
// Created by hp on 6/24/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols || rows > 1000 || cols > 1000)
    {
        printf("Invalid Input");
        return 0;
    }
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter value for matrix[%d][%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int tong = 0;
    int min = (rows < cols) ? rows : cols;
    for (int i = 0; i < min; i++)
        {
            tong += matrix[i][i];
        }
    int tong2 = 0;
    int max = (rows < cols) ? rows : cols;
    for (int i = 0; i < min; i++)
    {
        tong2 += matrix[i][cols - i - 1];
    }
    printf("Tong cheo chinh: %d\n", tong);
    printf("Tong cheo phu: %d", tong2);

    return 0;
}