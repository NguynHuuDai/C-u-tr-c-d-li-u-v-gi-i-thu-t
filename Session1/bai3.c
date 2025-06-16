#include <stdlib.h>
//
int *mallocArray(int n)
{
    int* arr = (int* )malloc(sizeof(int) * n);  // độ phức tạp O(n)

    for (int i = 0; i < n; i++)  // biến i  độ phức tạp O(1)
    {
        arr[i] = i;               //arr độ phức tạp O(1)
    }

    return arr;
}

// tổng  độ phức tạp không gian O(1) + O(1) + O(n) = O(n)
// Created by hp on 6/16/2025.
//
