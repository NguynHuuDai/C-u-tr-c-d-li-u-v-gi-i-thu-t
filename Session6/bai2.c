//
// Created by hp on 6/29/2025.
//
#include<stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    int n;
    printf("Nhap sao bat ki: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d\n", fibonacci(i));
    }
    return 0;
}