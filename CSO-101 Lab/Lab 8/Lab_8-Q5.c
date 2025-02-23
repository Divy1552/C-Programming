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

    int lowest = A[0][0];

    for (int i = 0;i < m;i++)
        for (int j = 0;j < n;j++)
            if (A[i][j] < lowest)
                lowest = A[i][j];

    printf("Lowest Number : %d",lowest);
}