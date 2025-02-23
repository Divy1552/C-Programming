# include <stdio.h>

void main() {

    int m,n;
    printf("Enter Number of Rows and Columns in A : ");
    scanf("%d %d",&m,&n);

    int A[m][n];
    printf("Enter Elements of Matrix A :\n");

    for (int i = 0;i < m;i++)
        for (int j = 0;j < n;j++)
            scanf("%d",&A[i][j]);

    int p,q;
    printf("Enter Number of Rows and Columns in B : ");
    scanf("%d %d",&p,&q);

    int B[p][q];
    printf("Enter Elements of Matrix B :\n");

    for (int i = 0;i < p;i++)
        for (int j = 0;j < q;j++)
            scanf("%d",&B[i][j]);
    
    if (n != p)
        printf("Matrix Multiplication is not possible in this Case.\n");
    else { 
    
        int C[m][q];
        printf("Resultant Matrix of Matrix A X Matrix B\n");

        for (int i = 0;i < m;i++)
            for (int j = 0;j < q;j++)
                C[i][j] = 0;

        for (int i = 0;i < m;i++)
            for (int j = 0;j < q;j++)
                for (int k = 0;k < n;k++)
                    C[i][j] += A[i][k] * B[k][j];

        for (int i = 0;i < m;i++) {
            for (int j = 0;j < q;j++)
                printf("%d ",C[i][j]);
            
            printf("\n");
        }
    }
}