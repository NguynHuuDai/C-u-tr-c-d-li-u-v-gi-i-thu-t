//
#include<stdio.h>

int main()
{
    int arr[] = {4, 6, 7, 2, 3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=4;

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }

    printf("Số lần phần tử xuất hiện là %d",count);
    return 0;
}

// Độ phức tạp thời gian O(n) vì vòng lặp chạy n lần để duyệt
// DPTKG O(1) chỉ sử dụng biến đơn
// Created by hp on 6/16/2025.
//
