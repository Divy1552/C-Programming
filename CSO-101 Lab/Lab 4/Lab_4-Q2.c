# include <stdio.h>

void main() {
    
    int Year;
    printf("Enter Year : ");
    scanf("%d",&Year);

    if (Year % 4 != 0)
        printf("%d is not a Leap Year.",Year);
    else if (Year % 100 == 0 && Year % 400 != 0)
        printf("%d is not a Leap Year.",Year);
    else
        printf("%d is a Leap Year.",Year);
}