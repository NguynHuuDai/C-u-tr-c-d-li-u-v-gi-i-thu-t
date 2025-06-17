//
// Created by hp on 6/17/2025.
//
#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int max;

    do
    {
        printf("Kich thuoc mang muon nhap\n");
        scanf("%d", &n);
    }while(n < 1 || n > 100);

    printf("Nhap vao mang\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max);
        max = arr[i];
    }
    printf("Gia tri lon nhat la %d",max);

    return 0;
}