/* 
 * File:   QuickSort.c
 * Author: https://www.roytuts.com
 */

#include <stdio.h>
#include <stdlib.h>

void quickSort(int a[], int low, int high) {
    int pi;

    if (low < high) {
        pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int partition(int a[], int low, int high) {
    int l, u, pivot, temp;
    l = low;
    u = high + 1;
    pivot = a[l];
    while (u >= l) {
        while (a[++l] < pivot);
        while (a[--u] > pivot);
        if (u > l) {
            swap(&a[l], &a[u]);
        }
    }
    swap(&a[low], &a[u]);
    return u;
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int i;
    int a[] = {15, 8, 17, 12, 38, 19};
    int n = sizeof (a) / sizeof (a[0]);
    printf("\n:: Quick Sort ::\n");
    printf("\nInput array elements\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d ", i, a[i]);
    }
    quickSort(a, 0, n - 1);

    printf("\n");
    printf("\nThe sorted array elements are given below\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d ", i, a[i]);
    }
}