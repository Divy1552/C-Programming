# include <stdio.h>

int countDigits(int n) {

    if (n == 0) return 1;

    int count = 0;
    
    while (n != 0) {
        n /= 10;
        count++;
    }

    return count;
}

void main() {

    int Num;
    printf("Enter Number : ");
    scanf("%d",&Num);

    int n = countDigits(Num);

    char Number[10];

    if (Num >= 0) {

        for (int i = n-1;i >= 0;i--) {
            Number[i] = (Num % 10) + '0';
            Num /= 10;
        }

        Number[n] = '\0';
    
    } else {

        Number[0] = '-';
        Num = -Num;

        for (int i = n;i >= 1;i--) {
            Number[i] = (Num % 10) + '0';
            Num /= 10;
        }

        Number[n+1] = '\0';
    }

    printf("Number (as String) : %s",Number);
}