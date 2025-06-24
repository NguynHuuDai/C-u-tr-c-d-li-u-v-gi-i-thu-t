//
// Created by hp on 6/20/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, num = 0;

    printf("Nhap vao kich thuoc mang");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int k=0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    num++;
                }

            }

            printf("Phan tu %d xuat hien %d lan /n", arr[i], num);
            num = 0;
        }

    }


    free(arr);
    return 0;
}