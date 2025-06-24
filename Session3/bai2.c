//
// Created by hp on 6/20/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;
    do
    {
        printf("Nhap vao so luong phan tu: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("So luong phan tu khong hop le", n);
        }else
        {
            arr = (int *)malloc(n * sizeof(int));
            for (int i = 0; i < n; i++)
            {
                printf("Nhap vao phan tu thu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            int checkMax = arr[0];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                   if ( arr[j] > arr[j+1])
                    {
                        checkMax = arr[j];
                    }
                }

            }
            printf("phan tu lon nhat la %d", checkMax);
            free(arr);
        }
    }while (n <= 0);


    return 0;
}