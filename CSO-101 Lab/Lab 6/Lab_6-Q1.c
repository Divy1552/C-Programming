# include <stdio.h>
# include <math.h>

int count_digits(int n) {
    for (int count = 1;count > 0;count++) {
        if (n / (int) pow(10.0,count) == 0)
            return count;
    }
}

void main() {
    
    int n,sum = 0;
    printf("n = ");
    scanf("%d",&n);
    
    int total_digits = count_digits(n);
    
    printf("Total Number of Digits : %d",total_digits);
}