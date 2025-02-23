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

    if (m != p || n != q)
        printf("Matrix Addition is not possible in this Case.");
    else {

        int C[m][n];
        printf("Resultant Matrix of Matrix A + Matrix B\n");

        for (int i = 0;i < m;i++)
            for (int j = 0;j < n;j++)
                C[i][j] = A[i][j] + B[i][j];

        for (int i = 0;i < m;i++) {
            for (int j = 0;j < q;j++)
                printf("%d ",C[i][j]);
                    
            printf("\n");
        }
    }
}