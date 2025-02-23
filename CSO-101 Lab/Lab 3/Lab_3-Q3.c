# include <stdio.h>

int main() {

    char o;
    printf("Enter Operator : ");
    scanf("%c",&o);
    
    int x,y;
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);

    printf("%d %c %d = ",x,o,y);
    
    if (o == '+')
        printf("%d",x += y);
    else if (o == '-')
        printf("%d",x -= y);
    else if (o == '*')
        printf("%d",x *= y);
    else if (o == '/') {

        if (y != 0) {
            printf("%d",x /= y);
        } else {
            printf("Infinite\n");
        }

    } else
        printf("Invalid Operator!\n");
    
    return 0;
}