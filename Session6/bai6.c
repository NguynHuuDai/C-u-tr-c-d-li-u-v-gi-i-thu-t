//
// Created by hp on 6/29/2025.
//
#include<stdio.h>

int dembac(int n){
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    return dembac(n-1)+dembac(n-2);
}

int main(){
    int m;
    printf("nhap so bac: ");
    scanf("%d",&m);
    if(m > 0){
        printf("So cach len %d", dembac(m));
    }else{
        printf("So khong hop le\n");
    }
    return 0;
}