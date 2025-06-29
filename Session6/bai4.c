//
// Created by hp on 6/29/2025.
//
#include <stdio.h>

void thap(int n, char a, char b, char c){
    if(n == 1){
        printf("Dia 1 di chuyen tu %c sang %c\n", A, C);
        return;
    }
    thap(n-1, A, B, C);
    printf("Dia %d di chuyen tu %c sang %c\n",n, A, C);
    thap(n-1, B, C, A);

}


int main(){
    int n;
    printf("Nhap so luong dia: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Thong tin khong hop le \n");
    }else{
        thap(n, 'A', 'B', 'C');
    }

    return 0;
}