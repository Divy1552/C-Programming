# include <stdio.h>

int main() {

    int num1,denom1,num2,denom2;

    printf("Enter first Fraction : ");
    scanf("%d/%d",&num1,&denom1);
    printf("Enter second Fraction : ");
    scanf("%d/%d",&num2,&denom2);

    printf("%d/%d + %d/%d = %d/%d",num1,denom1,num2,denom2,num1 * denom2 + num2 * denom1,denom1 * denom2);

    return 0;
}