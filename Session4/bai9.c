//
// Created by hp on 6/25/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    struct SinhVien
    {
        int id;
        int age;
        char name[100];
    };

    struct SinhVien sv[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Please enter the id:\n");
        scanf("%d", &sv[i].id);
        getchar();
        printf("Please enter the age:\n");
        scanf("%d", &sv[i].age);
        getchar();
        printf("Please enter the name:\n");
        fgets(sv[i].name, 100, stdin);
    }

    char searchName[100];
    printf("Please enter the search name:\n");
    fgets(searchName, 100, stdin);

}