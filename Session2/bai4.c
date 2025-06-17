//
// Created by hp on 6/17/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i, n, Valuedelete;
    int found = 0;

    printf("Kich thuoc mang ban muon tao ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    printf("Nhap vao mang ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Mang truoc khi xoa la");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Nhap vao gia tri muon xoa");
    scanf("%d", &Valuedelete);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == Valuedelete)
        {
            found = 1;
            for (int j = i; j < n -1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }
    if (!found)
    {
        printf("Khong co gia tri %d trong mang", Valuedelete);
    }else
    {
        printf("Mang sau khi xoa la");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
