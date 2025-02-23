# include <stdio.h>

int sumArray(int arr[],int n) {

    int sum = 0;

    for (int i = 0;i < n;i++)
        sum += arr[i];

    return sum;
}

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);

    int Sum = sumArray(Array,n);

    printf("Sum of Elements of Array : %d",Sum);

    return 0;
}