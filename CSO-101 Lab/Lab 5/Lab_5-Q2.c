# include <stdio.h>

int main() {
    
    int n;
    printf("n = ");
    scanf("%d",&n);
    
    for (int i = 1;i <= n;i++) {
        for (int j = n;j >= 1;j--) {
            if (j <= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}