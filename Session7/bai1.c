//
// Created by hp on 6/30/2025.
//
#include <stdio.h>
void printfArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void sapxep(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main(){
    int n;
    printf("Nhap vao so luong phan tu");
    scanf("%d", &n);
    if(n <= 0 || n >=1000){
        printf("So luong phan tu khong hop le");
        return 1;
    }

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Nhap vao so luong phan tu thu %d", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("before");
    printfArray(arr, n);
    sapxep(arr, n);
    printf("after");
    printfArray(arr, n);


    return 0;
}