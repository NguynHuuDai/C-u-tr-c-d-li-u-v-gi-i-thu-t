//
// Created by hp on 6/25/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so luong phan tu\n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu %d\n: ", i+1);
        scanf("%d", &arr[i]);
    }
    int search;
    printf("Nhap so can tim\n: ");
    scanf("%d", &search);

    int low = 0, high = n - 1, mid;
    int found = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            found = mid;
            break;
        }
        else if (search > arr[mid])
        {
            low = mid + 1;
        }else
        {
            high = mid - 1;
        }
    }
    if (found != -1)
    {
        printf(" %d co ton tai\n\n", search);
    }else
    {
        printf("%d khong ton tai \n", search);
    }
    return 0;
}