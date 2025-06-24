//
// Created by hp on 6/20/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;
    int sum = 0;int check = 0;

    do
    {
        printf("Nhap vao so luong phan tu : ");
        scanf("%d",&n);
        if (n <= 0)
        {
            printf("So luong phan tu khong hop le");
        }else
        {
            arr = (int *)malloc(n * sizeof(int));
            for (int i = 0; i < n; i++)
            {
                printf("Nhap vao phan tu thu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    check++;
                    sum += arr[i];
                }

            }
            if (check == 0)
                {
                    printf("Khong co so chan nao trong mang");
                }else
                {
                    int tbc = sum / check;
                    printf("Trung binh cong so chan trong mang la %d", tbc);
                }


        }

    }while (n <= 0);
    return 0;
}