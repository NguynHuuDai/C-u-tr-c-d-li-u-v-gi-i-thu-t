//
// Created by hp on 7/1/2025.
//
#include <stdio.h>

int search (int arr[],int n) {
    int k;
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++) {
        if(arr[i]==k) {
            printf("Element found at index %d\n",i);
            return 0;
        }
    }
    printf("Element not found\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <0 || n >= 1000){
        printf("Number should be between 0 and 1000");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter %d elements: ", i);
        scanf("%d", &arr[i]);
    }
    search(arr, n);
    return 0;
}