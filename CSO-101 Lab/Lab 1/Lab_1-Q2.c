# include <stdio.h>

int main() {

    float f;
    printf("Enter a Number : ");
    scanf("%f",&f);

    printf("Fractional Number : %.3f\n",f);

    printf("Integer Part of Number : %d\n",(int) f);
    printf("Fractional Part of Number : %.3f\n",f - (int) f);

    return 0;
}