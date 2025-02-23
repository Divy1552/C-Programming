# include <stdio.h>
# include <math.h>

int main() {
    
    int n;
    printf("Decimal Number : ");
    scanf("%d",&n);
    
    int Decimal_to_Octal = 0;
    
    for (int i = 0;i >= 0;i++) {
        
        if (n != 0) {
            Decimal_to_Octal += (n % 8) * round(pow(10,i));
            n /= 8;
            
        } else {
            printf("Octal Number : %d",Decimal_to_Octal);
            break;
        }
    }
    
    return 0;
}