#include <stdio.h>
int main() {
    int arr[] = {4, 7, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == 0) {
                t[i][j] = arr[j];
            } else {
                t[i][j] = t[i - 1][j] + arr[i];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}

output:
4
11 7
14 10 3
20 16 9 6
27 23 16 13 7
