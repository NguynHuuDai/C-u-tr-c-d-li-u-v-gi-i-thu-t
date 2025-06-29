//
// Created by hp on 6/29/2025.
//
#include <stdio.h>
    int tinhTong{
        if(n == 0)
            return n%10 + tong(n/10);
    }

    int main(){
    int n;
    printf("Nhap vao so nguyen");
    scanf("%d", &n);
    if(n <= 0){
        printf("Nhap vao khong hop le");
    }else{
        int tongsonguyen = tinhTong(n);
        printf("Tong so nguyen %d", tongsonguyen);
    }

    return 0;
}