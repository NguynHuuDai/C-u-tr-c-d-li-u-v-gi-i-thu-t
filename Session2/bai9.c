//
// Created by hp on 6/17/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;

    printf("Nhap vao kich thuoc mang : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Nhap vao mang");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxcount=0;
    int result=arr[0];

    for (int i = 0; i < n; i++)
    {
        int count=1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count>maxcount)
        {
            maxcount=count;
            result=arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la %d", result);
    free(arr);
    return 0;
}
