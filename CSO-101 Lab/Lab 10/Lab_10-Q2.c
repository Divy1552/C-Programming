# include <stdio.h>

int Sum_of_Natural_Numbers(int n) {

    if (n == 1)
        return 1;
    
    return n + Sum_of_Natural_Numbers(n-1);
}

int main() {

    int n;
    printf("Enter the Natural Number : ");
    scanf("%d",&n);

    printf("Sum of first %d Natural Numbers : %d\n",n,Sum_of_Natural_Numbers(n));
    
    return 0;
}