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
        scanf("%d",&n);

    }while(n<=0);

    arr = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        printf("Nhap vao phan tu thu %d", i);
        scanf("%d",&arr[i]);
    }

    int search;
    int co = 0;
    printf("Nhap vao phan tu muon tim kiem");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if (search==arr[i])
        {

            printf("%d", i);
            co = 1;
        }

    }
    if (!co)
    {
        printf("Khong tim thay phan tu trong mang");
    }else
    {
        printf("\n");
    }

    free(arr);
    return 0;
}