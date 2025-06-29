//
// Created by hp on 6/27/2025.
//
#include <stdio.h>
int recursion(int n)
{
    if (n == 0)
	 	return 0;
    recursion(n/2);
	printf("%d", n%2);
}
int main()
{
    int n;
    printf("Nhap vao mot so nguyen");
    scanf("%d",&n);
	printf("Nhi phan");
	recursion(n);
	printf("\n");


    return 0;
}