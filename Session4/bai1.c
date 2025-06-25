//
// Created by hp on 6/25/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int *arr;
    do
    {
        printf("Nhap vao kich thuoc mang ban muon them vao: ");
        scanf("%d", &n);
    }while (n < 1);


    arr = (int*)malloc(n * sizeof(int));

    printf("Nhap vao cac phan tu");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu ban muon tim kiem");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            printf("Vi tri ban muon tim xuat hien dau tien trong mang : %d", i);
            break;
        }
        else
        {
            printf("Phan tu ban tim khong xuat hien trong mang");
        }
    }


    free(arr);

    return 0;
}