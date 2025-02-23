# include <stdio.h>

int main() {

    float r;
    printf("Enter Radius of Sphere : ");
    scanf("%f",&r);

    float V;
    V = ((4 * (float) 22/7) / 3) * (r * r * r);

    printf ("Volume of Sphere : %f",V);

    return 0;
}