# include <stdio.h>

int main() {

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

            if (i != j && A[i][j] != A[j][i]) {
                printf("Not a Symmetric Matrix\n");
                return 1;
            } else if (A[n-2][n-1] == A[n-1][n-2]) {
                printf("Symmetric Matrix\n");
                return 0;
            }

        }
    }
}