#include <stdio.h>

int main(){
    int n;
    printf("Nhập vào giá trị : ");
    scanf("%d",&n);

    //cách 1:
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Tổng từ 1 đến giá trị vừa nhập là %d",sum);
    // độ phức tạp thời gian O(n)

    //cách 2:
    int sum2 = n * (n + 1) / 2;
    printf("Tổng từ 1 đến giá trị vừa nhập là %d",sum2);

    // độ phức tạp thời gian O(1)
}
// Created by hp on 6/16/2025.
//
