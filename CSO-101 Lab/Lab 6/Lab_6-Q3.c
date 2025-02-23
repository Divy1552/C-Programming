# include <stdio.h>

int Fibonacci(int n) {
    
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);
}

void printFibonacci(int i,int n) {
    
    if (i <= n && i >= 0) {
        printf("%d ",Fibonacci(i));
        printFibonacci(i+1,n);
    }
}

int main() {

    int n;
    printf("n = ");
    scanf("%d",&n);

    printFibonacci(0,n-1);

    return 0;
}