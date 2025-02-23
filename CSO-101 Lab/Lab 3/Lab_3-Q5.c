# include <stdio.h>

int main() {
    
    int a,b;
    printf("a,b = ");
    scanf("%d,%d",&a,&b);

    printf("Before Swapping : a = %d,b = %d\n",a,b);

    // a -> b & b -> a
    // Let a = 5,b = 10
    a = a + b; // a = 15
    b = a - b; // b = 5
    a = a - b; // a = 10

    printf("After Swapping : a = %d,b = %d\n",a,b);

    return 0;
}