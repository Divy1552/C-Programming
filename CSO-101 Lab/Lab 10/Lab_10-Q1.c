# include <stdio.h>
# include <math.h>

int power(int a,int b) {

    if (b == 0)
        return 1;

    return a * power(a,b-1);
}

int main() {

    int a;
    printf("Enter Base : ");
    scanf("%d",&a);

    int b;
    printf("Enter Exponent : ");
    scanf("%d",&b);

    printf("Power(%d,%d) = %d",a,b,power(a,b));

    return 0;
}