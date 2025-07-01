//
// Created by hp on 7/1/2025.
//
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Phan tu %d duoc tim thay tai chi so %d\n", target, result);
    else
        printf("Khong tim thay phan tu %d trong mang.\n", target);

    return 0;
}