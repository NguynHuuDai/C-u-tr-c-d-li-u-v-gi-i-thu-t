#include <stdio.h>
#define MAX 1001
int main()
{
    int arr[]={3,5,3,5,6,7,8,5,6,2,2,4,5,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int freq[MAX] = {0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    int maxCount = 0;
    int mostFreq = -1;

    for(int i=0;i< MAX;i++)
    {
        if(freq[i]>maxCount)
        {
            maxCount = freq[i];
            mostFreq = i;
        }
    }
    printf("Phần tử xuất hiện nhiều nhất là %d (Xuất hiện %d lần)" ,mostFreq, maxCount);
    return 0;
}
//Độ phức tạp thời gian O(n +k)
// Độ phức tạp không gian O(n +k)
// Created by hp on 6/16/2025.
//
