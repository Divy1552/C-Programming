# include <stdio.h>

int main() {

    int arr[5];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < 5;i++)
        scanf("%d",&arr[i]);

    for (int i = 0;i < 2;i++) {

        int temp = *(arr+i);
        *(arr+i) = *(arr+5-1-i);
        *(arr+5-1-i) = temp;
        
    }

    printf("Reversed Array : ");

    for (int i = 0;i < 5;i++)
        printf("%d ",*(arr+i));

    return 0;
}