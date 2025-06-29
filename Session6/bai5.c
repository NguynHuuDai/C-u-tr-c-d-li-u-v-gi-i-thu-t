//
// Created by hp on 6/27/2025.
//
#include <stdio.h>
#include <stdlib.h>

int Search(int arr[],int index,int n, int *min, int *max){
    if(index == n - 1){
        *min = arr[index];
        *max = arr[index];
    return 0;
    }
    Search(arr,index+1,n,min,max);
    if(*min > arr[index]){
        *min = arr[index];
    }
    if(*max < arr[index]){
        *max = arr[index];
    }
}


int main(){
    int *arr;
    int n;
    do{
        printf("Nhap vao kich thuoc mang");
        scanf("%d",&n);
    }while(n < 1);
    arr = (int *)malloc(n * sizeof(int));
    int min, max;
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    Search(arr,0,n,&min,&max);
    printf("So nho nhat %d\n So lon nhat %d", min, max);




    free(arr);
    return 0;
}