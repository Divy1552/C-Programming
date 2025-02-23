# include <stdio.h>

int main() {

    printf("f(x) = ((((3x + 2)x - 5)x * -1)x + 7)x - 6\n");

    float x;
    printf("put x = ");
    scanf("%f",&x);

    float expression = ((((3 * x + 2) * x - 5) * x * -1) * x + 7) * x - 6;
    printf("f(%f) = %f",x,expression);

    return 0;
}