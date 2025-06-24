//
// Created by hp on 6/20/2025.
//
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n;
    do
    {
        printf("Nhap vao kich thuoc mang : ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("So luong phan tu khong duoc am /n");

        }else if (n == 0)
        {
            printf("So luong phan tu phai lon hon 0 /n");
        }else
        {
            arr = (int *)malloc(n * sizeof(int));
            for (int i = 0; i < n; i++)
            {
                printf("Nhap vao phan tu thu %d :", i + 1);
                scanf("%d", &arr[i]);
            }
            for (int i = 0; i < n; i++)
            {
                printf("So thu %d = %d \n", i + 1, arr[i]);
            }
        }
    }while (n <= 0);


    return 0;
}