//
// Created by hp on 6/17/2025.
//
#include <stdio.h>

int main()
{
    int n, m, count = 0;
    int arr[100];
    printf("Nhap vao kich thuoc mang muon nhap");
    scanf("%d", &n);

    printf("Nhap vao mang");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("So ban muon tim kiem");
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("So %d khong xuat hien trong mang", m);
    }else
    {
        printf("So %d xuat hien %d lan trong mang", m, count);
    }


    return 0;
}