#include<stdio.h>

int main(){
    int n;
    printf("Nhập vào số lượng phần tử của mảng");
    scanf("%d",&n);

    int arr[n];

    printf("Nhập vào phần tử của mảng");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Mảng sau khi sắp xếp");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
// độ phức tạp thời gian trường hợp xấu nhất đảo ngược mảng hoàn toàn O(n^2)
// độ phức tạp trung bình phần tử ngẫu nhiên O(n^2)


// dộ phức tạp không gian gồm i , j , temp chiếm O(1)
// Created by hp on 6/16/2025.
//
