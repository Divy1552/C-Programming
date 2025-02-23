# include <stdio.h>
# include <math.h>

int main() {
    
    float a,b,c;
    printf("ax2 + bx + c = 0\nput a,b,c = ");
    scanf("%f,%f,%f",&a,&b,&c);

    float x1,x2,real_x,imaginary_x,D;
    D = b*b - 4*a*c;

    if (D >= 0) {

        x1 = ((-b + sqrt(D))/2*a);
        x2 = ((-b - sqrt(D))/2*a);

        printf("x = %.2f or x = %.2f",x1,x2);

    } else {

        real_x = (-b)/2*a;
        imaginary_x = sqrt(-D)/2*a;

        printf("x = %.2f + i%.2f or x = %.2f - i%.2f",real_x,imaginary_x,real_x,imaginary_x);

    }

    return 0;
}