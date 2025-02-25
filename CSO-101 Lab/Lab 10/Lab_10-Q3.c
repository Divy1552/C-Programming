# include <stdio.h>
# include <math.h>

int countDigits(int n) {

    int count = 0;
    
    while (n != 0) {
        n /= 10;
        count++;
    }

    return count;

    if (n == 0)
        return 1;
}

int reverse(int a) {

    int reverse_a = 0;

    int n = countDigits(a);

    if (a == 0)
        return 0;

    reverse_a = (a % 10) * pow(10,n-1) + reverse(a/10);

    return reverse_a;
}

void main() {

    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    printf("Reversed Number : %d",reverse(n));
}