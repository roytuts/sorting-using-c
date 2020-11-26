/* 
 * File:   StraightSelectionSort.c
 * Author: https://roytuts.com
 */

#include <stdio.h>
#include <stdlib.h>

void straightSelectionSort(int a[], int n) {
    int i = 0, j, k;
    int temp;
    while (i < n) {
        k = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[k]) {
                k = j;
            }
        }
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
        i++;
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
    printf("\n:: Straight Selection Sort ::\n");
    printf("\nInput array elements\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d ", i, a[i]);
    }
    straightSelectionSort(a, n);
}