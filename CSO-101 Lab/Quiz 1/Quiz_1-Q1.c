# include <stdio.h>

int main() {
    
    int n;
    printf("Enter Amount (in $) : ");
    scanf("$%d",&n);
    
    int count = 0;
    while (n >= 0) {
        if (n >= 20) {
            count += n / 20;
            n -= (n / 20) * 20;
        } else if (n >= 10 && n <= 20) {
            count += n / 10;
            n -= (n / 10) * 10;
        } else if (n >= 5 && n <= 10) {
            count += n / 5;
            n -= (n / 5) * 5;
        } else if (n >= 1 && n <= 5) {
            count += n / 1;
            n -= (n / 1) * 1;
        } else {
            printf("Least Number of Currency Required : %d",count);
            break;
        }
    }
    
    return 0;
}