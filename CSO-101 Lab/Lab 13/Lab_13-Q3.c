# include <stdio.h>

int mysteryFunction(int x,int y) {
    return x ^ y;
}

int main() {

    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    int b;
    printf("Enter b : ");
    scanf("%d",&b);

    printf("mysteryFunction(%d,%d) = %d",a,b,mysteryFunction(a,b));

    return 0;
}