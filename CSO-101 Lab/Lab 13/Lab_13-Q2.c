# include <stdio.h>

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 1;i < n;i++) {

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];

    }

    printf("Maximum Absolute Difference : %d",max - min);

    return 0;
}