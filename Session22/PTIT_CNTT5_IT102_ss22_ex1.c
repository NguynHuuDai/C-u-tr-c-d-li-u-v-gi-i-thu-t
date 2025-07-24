//
// Created by hp on 7/24/2025.
//
#include <stdio.h>
#include <stdlib.h>

void resetMatric(int n, int MATRIC[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            MATRIC[i][j]=0;
        }
    }
}
void displayMatric(int n, int MATRIC[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", MATRIC[i][j]);
        }
        printf("\n");
    }
}
void addMatric(int n, int MATRIC[n][n])
{
    int u;
    int v;
    printf("Nhap canh u va v: ");
    scanf("%d %d", &u, &v);
    if (u >= 0 && u < n && v >= 0 && v < n)
    {
        MATRIC[u][v] = 1;
        MATRIC[v][u] = 1;
    }
    else
    {
        printf("Canh khong hop le! (chi so dinh tu 0 den %d)\n", n - 1);
    }

}
int main()
{
    int n;
    // int soCanh;
    printf("Nhap vao so dinh: ");
    scanf("%d", &n);
    int MATRIC[n][n];
    resetMatric(n, MATRIC);
    // printf("Nhap vao so canh: ");
    // scanf("%d", &soCanh);
    for (int i = 0; i < n+1; i++)
    {
        addMatric(n, MATRIC);
    }


    displayMatric(n, MATRIC);


    return 0;
}