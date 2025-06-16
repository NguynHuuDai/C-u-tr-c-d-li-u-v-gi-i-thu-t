#include<stdio.h>

int main(){
    int n=10; //độ phức tạp O(1)
    for(int i=1;i<=n;i++){      // so sánh độ phức tạp O(n), tăng i độ phức tạp O(n)
        printf("Hello\n"); // độ phức tạp O(n)
    }
    return 0;
}// độ phức tạp là O(1) + O(n) + O(n) + O(n) = O(n)
// Created by hp on 6/16/2025.
//
