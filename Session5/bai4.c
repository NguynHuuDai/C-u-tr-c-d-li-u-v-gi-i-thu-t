//
// Created by hp on 6/26/2025.
//
#include <stdio.h>
int tong (int fNumber, int eNumber)
{
    if (fNumber == eNumber)
    {
        return eNumber;
    }
    return fNumber + tong(fNumber+1, eNumber);
}
int main()
{
    int fNumber, eNumber;
    printf("Nhap so thu nhat");
    scanf("%d", &fNumber);
    printf("Nhat so thu hai");
    scanf("%d", &eNumber);
    if (fNumber > eNumber || fNumber < 0 || eNumber<0)
    {
        printf("Khong hop le");
        return 0;
    }
    tong(fNumber, eNumber);
    printf("%d", tong(fNumber, eNumber));
    return 0;
}
