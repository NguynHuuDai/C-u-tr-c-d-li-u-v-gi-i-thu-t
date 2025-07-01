//
// Created by hp on 7/1/2025.
//
#include <stdio.h>

int insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return 0;
}

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x) return i;
    return -1;
}

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        return binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap %d so nguyen: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertionSort(arr, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int search;
    printf("Nhap so can tim: ");
    scanf("%d", &search);
    int result = binarySearch(arr, 0, n - 1, search);
    if (result != -1) {
        printf("Vi tri %d\n", result + 1);
    } else {
        printf("Khong ton tai\n");
    }
    return 0;
}