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

    printf("Row-wise Sum\n");

    for (int i = 0;i < m;i++) {
        
        int row_sum = 0;

        for (int j = 0;j < n;j++)
            row_sum += A[i][j];
        
        printf("Row %d : %d\n",i+1,row_sum);
    }

    printf("Column-wise Sum\n");

    for (int j = 0;j < n;j++) {
        
        int column_sum = 0;

        for (int i = 0;i < m;i++)
            column_sum += A[i][j];

        printf("Column %d : %d\n",j+1,column_sum);
    }           
}