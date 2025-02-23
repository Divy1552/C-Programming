# include <stdio.h>

int factorial(int n) {

    if (n == 0) {
        return 1;
    } else if (n >= 1) {
        return n * factorial(n-1);
    }
}

int main() {

    int n;
    printf("n = ");
    scanf("%d",&n);

    if (n >= 0) {
        printf("%d! = %d\n",n,factorial(n));
    } else {
        printf("Invalid Number!\n");
    }
    
    return 0;
}