//
// Created by hp on 6/30/2025.
//
#include <stdio.h>
#include <string.h>

void sortCharacters(char str[])
{
    int n = strlen(str);
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(str[j] > str[j+1])
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}
int main()
{
    char str[1000];

    printf("Nhap vao chuoi ki tu");
    scanf("%s", str);

    printf("before : %s", str);

    sortCharacters(str);
    printf("after : %s", str);
    return 0;
}