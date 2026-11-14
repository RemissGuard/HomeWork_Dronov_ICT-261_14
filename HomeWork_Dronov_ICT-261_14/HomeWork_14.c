#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void rotateRight(int* a, int n);
int main()
{
    system("chcp 1251");
    int n;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    n = sizeof(arr) / sizeof(arr[0]);
    rotateRight(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

void rotateRight(int* a, int n)
{
    if (n <= 1) return;
    int last = a[n - 1];
    for (int i = n - 1; i > 0; i--) a[i] = a[i - 1];
    a[0] = last;
}