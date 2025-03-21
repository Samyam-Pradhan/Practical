#include <stdio.h>

int count_inv(int arr[], int n) {
    int i,j,inversions = 0;
    for (i=0; i < n; i++) {
        for (j=i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }
    return inversions;
}

int main() {
    int arr[] = {5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Total Inversions: %d\n", count_inv(arr, n));
    return 0;
}
