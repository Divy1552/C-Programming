# include <stdio.h>

int GCD(int a,int b) {

    int i;
    
    if (a > b)
        i = b;
    else if (a < b)
        i = a;
    else
        return a;

    while (i >= 1) {
        if (a % i == 0 && b % i == 0)
            return i;
        i--;
    }
}

int main() {

    int n1,n2;
    printf("f(a,b) = GCD(a,b)\nput a,b = ");
    scanf("%d,%d",&n1,&n2);

    printf("f(%d,%d) = %d\n",n1,n2,GCD(n1,n2));

    return 0;
}