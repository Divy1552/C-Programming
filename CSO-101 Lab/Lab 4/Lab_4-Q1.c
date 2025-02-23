# include <stdio.h>

void main() {
    
    int x,y,z;
    printf("x,y,z = ");
    scanf("%d,%d,%d",&x,&y,&z);

    if (x >= y && x >= z)
        printf("%d is the largest number",x);
    else if (y >= z && y >= x)
        printf("%d is the largest number",y);
    else
        printf("%d is the largest number",z);
}