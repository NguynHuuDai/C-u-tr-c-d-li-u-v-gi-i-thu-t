//
// Created by hp on 7/24/2025.
//
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so dinh (0 < n < 100): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("So dinh khong hop le!\n");
        return 1;
    }

    int matrix[100][100];
    printf("Nhap ma tran ke:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
