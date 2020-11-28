/* 
 * File:   ShellSort.c
 * Author: https://roytuts.com
 */

#include <stdio.h>
#include <stdlib.h>

void shellSort(int a[], int n) {
    int i, j, m;
    int temp;
    for (m = n / 2; m > 0; m /= 2) {
        for (j = m; j < n; j++) {
            for (i = j - m; i >= 0; i -= m) {
                if (a[i + m] >= a[i]) {
                    break;
                } else {
                    temp = a[i];
                    a[i] = a[i + m];
                    a[i + m] = temp;
                }
            }
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
    printf("\n:: Shell Sort ::\n");
    printf("\nInput array elements\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d ", i, a[i]);
    }
    shellSort(a, n);
}