# include <stdio.h>
# include <math.h>

int count_digits(int n) {
    for (int i = 1;i > 0;i++) {
        if (n / (int) pow(10,i) == 0) {
            return i;
        }
    }
}

int main() {
    
    int n,sum = 0;
    printf("n = ");
    scanf("%d",&n);
    
    int total_digits = count_digits(n);
    
    int l = n;
    
    while (l > 0) {
        
        sum += (int) pow((l % 10),total_digits);
        
        if (l == 0) {
            break;
        } else{
            l /= 10;
        }
    }
    
    if(sum == n) {
        printf("%d is an Armstrong Number.\n",n);
    } else {
        printf("%d is not an Armstrong Number.\n",n);
    }

    return 0;
}