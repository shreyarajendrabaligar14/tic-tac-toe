#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the values of m,n:\n");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter 2D Array elements:\n");
    for (int i = 0; i <=m-1; i++) {
        for (int j = 0; j <=n-1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array elements are:\n");
    for (int i = 0; i <=m-1; i++) {
        for (int j = 0; j <=n-1; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    