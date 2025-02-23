# include <stdio.h>

void main() {
    
    int n;
    printf("Enter Number of Rows/Columns in Square Matrix A : ");
    scanf("%d",&n);
    
    int A[n][n];
    
    printf("Enter Elements of Matrix A :\n");

    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
            scanf("%d",&A[i][j]);
    
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {

            if (i == j && A[i][j] != 1) {
                printf("Matrix A is not an Identity Matrix.");
                goto end;
            } else if (i != j && A[i][j] != 0) {
                printf("Matrix A is not an Identity Matrix.");
                goto end;
            } else if (i == n-1 && j == n-1) {
                printf("Matrix A is an Identity Matrix.");
                goto end;
            }
        
        }
    }

    end : printf("\n");
}