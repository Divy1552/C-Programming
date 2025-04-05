# include <stdio.h>

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    int count = 0;

    if (arr[0] > arr[1])
        count += 1;

    for (int i = 1;i < n-1;i++)
        if (arr[i] > arr[i+1] && arr[i-1] < arr[i])
            count += 1;

    if (arr[n-2] < arr[n-1])
        count += 1;

    printf("Count of Elements (Greater than their Neighbours) : %d",count);

    return 0;
}