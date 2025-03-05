# include <stdio.h>

void Transpose(int m,int n,int A[m][n],int Transpose_A[n][m]) {

    for (int i = 0;i < m;i++)
        for (int j = 0;j < n;j++) 
            Transpose_A[j][i] = A[i][j];
    
}

int main() {

    int m,n;
    printf("Enter Number of Rows and Columns in A : ");
    scanf("%d %d",&m,&n);

    int A[m][n];
    printf("Enter Elements of Matrix A :\n");

    for (int i = 0;i < m;i++)
        for (int j = 0;j < n;j++)
            scanf("%d",&A[i][j]);

    int Transpose_A[n][m];
    printf("Transpose of Matrix A\n");
    Transpose(m,n,A,Transpose_A);

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++)
            printf("%d ",Transpose_A[i][j]);
        printf("\n");
    }

    return 0;
}