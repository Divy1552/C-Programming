# include <stdio.h>

int main() {

    int n,reverse_n = 0,original_n;
    printf("Enter an Integer (to check Palindrome) : ");
    scanf("%d",&n);

    original_n = n;

    while (original_n > 0) {
        reverse_n = reverse_n * 10 + original_n % 10;
        original_n /= 10;
    }

    if (n == reverse_n) printf("%d is a Palindrome.\n",n);
    else printf("%d is not a Palindrome.\n",n);

    return 0;
}