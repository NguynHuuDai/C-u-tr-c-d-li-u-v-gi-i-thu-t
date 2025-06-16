#include <stdio.h>
#define MAX 1001

int main()
{
    int n;
    printf("Nhập vào số lượng phần tử");
    scanf("%d",&n);

    int arr[n];
    printf("Nhập vào cách phần tử trong khoảng 1-1000");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int check=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                check=1;
                break;
            }
        }
        if(check) break;
    }

    if(check==1)
    {
        printf("Mang co phan tu trung lap");
    }else
    {
        printf("Mảng có phần tử trùng lặp");
    }
}
//Độ phức tạp thời gian : Nhập mảng O(n), Vòng lặp O(n^2) , Gán biến in thông báo O(1) tổng O(n^2)
// ĐỘ phức tạp không gian :arr[n] O(n) biến i,j,n,check O(1) tổng O(n)
// Created by hp on 6/16/2025.
//
