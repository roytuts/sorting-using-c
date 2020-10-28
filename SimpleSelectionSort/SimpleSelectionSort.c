/* 
 * File:   SimpleSelectionSort.c
 * Author: https://www.roytuts.com
 */

#include <stdio.h>
#include <stdlib.h>

void simpleSelectionSort(int a[], int b[], int n) {
    int i = 0, j, k = 0;
    int temp = 999;
    while (i < n) {
        for (j = 0; j < n; j++) {
            if (a[j] < temp) {
                temp = a[j];
                k = j;
            }
        }
        a[k] = 999;
        b[i] = temp;
        temp = 999;
        i++;
    }
    printf("\n");
    printf("\nThe sorted array elements are given below\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d ", i, b[i]);
    }
}

int main() {
    int i, n = 6, b[6];
    int a[] = {15, 8, 17, 12, 38, 19};
    printf("\n:: Simple Selection Sort ::\n");
    printf("\nInput array elements\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d ", i, a[i]);
    }
    simpleSelectionSort(a, b, n);
}