# include <stdio.h>

int main() {
    
    long int l;
    printf("Enter EAN Number (upto 12 Digits) : ");
    scanf("%ld",&l);
    
    int Odd_Digits_Sum = 0,Even_Digits_Sum = 0;
    
    long int n = l;
    
    for (int i = 12;i >= 1;i--) {
        
        int Digit = n % 10;
        
        if (i % 2 != 0) {
            Odd_Digits_Sum += Digit;
        } else {
            Even_Digits_Sum += Digit;
        }
        n /= 10;
    }
    
    int Check_Digit = ((Odd_Digits_Sum + 3 * Even_Digits_Sum - 1) % 10) - 1;
    
    printf("EAN Number of 13 Digits : %ld%d",l,Check_Digit);

    return 0;
}