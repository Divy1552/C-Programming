# include <stdio.h>

void swap(int *a,int *b) {

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;

    return;
}

int main() {

    int a,b;
    printf("Enter a,b : ");
    scanf("%d,%d",&a,&b);

    printf("Before Swapping : a = %d  b = %d\n",a,b);

    swap(&a,&b);

    printf("After Swapping : a = %d  b = %d\n",a,b);

    return 0;
}