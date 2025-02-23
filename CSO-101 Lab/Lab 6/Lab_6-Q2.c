# include <stdio.h>

int main() {

    int n;
    printf("n = ");
    scanf("%d",&n);

    if (n == 2) {
        printf("2 is a Prime Number.\n");
    } else {

        for (int i = 2;i <= n-1;i += 1) {
            
            if (n % i == 0) {
                printf("%d is not a Prime Number.\n",n);
                break;
            } else if (i == n-1) {
                printf("%d is a Prime Number.\n",n);
            }
        }
    }

    return 0;
}