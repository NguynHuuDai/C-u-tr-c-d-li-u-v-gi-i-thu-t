//
// Created by hp on 6/25/2025.
//
#include <stdio.h>
#include <string.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
};

int main() {
    struct sinhVien vienvien[5];

    for (int i = 0; i < 5; i++) {
        printf("Nhap id: ");
        scanf("%d", &vienvien[i].id);
        getchar(); // Xóa kí tự '\n' còn lại trong bộ đệm

        printf("Nhap name: ");
        fgets(vienvien[i].name, sizeof(vienvien[i].name), stdin);
        // Xóa kí tự '\n' nếu có
        vienvien[i].name[strcspn(vienvien[i].name, "\n")] = '\0';

        printf("Nhap age: ");
        scanf("%d", &vienvien[i].age);
        getchar(); // Xóa kí tự '\n' sau khi nhập số
    }

    int id;
    printf("Nhap id can tim: ");
    scanf("%d", &id);

    for (int i = 0; i < 5; i++) {
        if (vienvien[i].id == id) {
            printf("Thong tin sinh vien: %s %d\n", vienvien[i].name, vienvien[i].age);
            return 0; // Kết thúc sau khi tìm thấy
        }
    }

    printf("Khong tim thay sinh vien!\n");
    return 0;
}
