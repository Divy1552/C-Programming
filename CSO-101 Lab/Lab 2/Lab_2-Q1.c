# include <stdio.h>

int main() {

    float Celsius;
    printf("Temperature (in Celsius) : ");
    scanf("%f",&Celsius);

    float Fahrenheit;
    Fahrenheit = (9 * Celsius) / 5 + 32;

    printf("Temperature (in Fahrenheit) : %f",Fahrenheit);

    return 0;
}