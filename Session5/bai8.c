//
// Created by hp on 6/26/2025.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int Bochuyendoi(const char *chuoi, int viTri, int doDai)
{
    if (viTri >= doDai)
    {
        return 0;
    }
    if (!isdigit(chuoi[viTri]))
    {
        return -1;
    }
    int giaTrihienTai = Bochuyendoi(chuoi, viTri+1, doDai);
    if (giaTrihienTai == -1)
    {
        return -1;
    }
    return (chuoi[viTri] - '0')* (int)(10, doDai - viTri - 1)+ giaTrihienTai;
}
int main()
{
    char chuoi[50];
    printf("Nhap chuoi: ");
    fgets(chuoi, 50, stdin);
    chuoi[strlen(chuoi), "\n"] = 0;

    int doDai = strlen(chuoi);
    int ketQua = Bochuyendoi(chuoi, doDai, 0);
    if (ketQua == -1)
    {
        printf("Input khong hop le ");
    }else
    {
        printf("Output :%d \n ", ketQua);
    }
    return 0;
}