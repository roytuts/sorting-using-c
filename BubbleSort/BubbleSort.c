/* 
 * File:   BubbleSort.c
 * Author: https://www.roytuts.com
 */

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int a[], int n) {
    int i, j, k;
    int temp;
    for (i = 0; i < n; i++) {
        j = n - 1;
        k = 0;
        while (j > i) {
            if (a[j] < a[j - 1]) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
                k = 1;
            }
            j--;
        }
        if (k == 0) {
            break;
        }
    }
    printf("\n");
    printf("\nThe sorted array elements are given below\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d ", i, a[i]);
    }
}

int main() {
    int i, n = 6;
    int a[] = {15, 8, 17, 12, 38, 19};
    printf("\n:: Bubble Sort ::\n");
    printf("\nInput array elements\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d ", i, a[i]);
    }
    bubbleSort(a, n);
}