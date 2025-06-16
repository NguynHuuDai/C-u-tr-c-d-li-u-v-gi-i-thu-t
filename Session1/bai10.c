#include <stdio.h>
#include <string.h>

int isPermutation(char str1[], char str2[])
{
    int i,j, count=0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2)
    {
        return 0;
    }
    int matched[100] = {0};
    for(i=0;i<len1;i++)
    {
        int found = 0;
        for(j=0;j<len2;j++)
        {
            if(str1[i] == str2[j] && matched[j] == 0)
            {
                matched[j] = 1;
                found = 1;
                break;
            }
        }
        if (!found) return 0;
    }
    return 1;
}

int main()
{
    char str1[]="hello";
    char str2[]="world";

    if(isPermutation(str1, str2))
    {
        printf("True\n");
    }else
    {
        printf("False\n");
    }
    return 0;
}
//DPTTG O(n^2)(n * n)
// DPTKG O(1)
// Created by hp on 6/16/2025.
//
