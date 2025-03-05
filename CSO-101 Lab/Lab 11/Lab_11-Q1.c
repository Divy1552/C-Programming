# include <stdio.h>

int *LargestNumber(int arr[],int n) {

    int Largest = arr[0];
    int Largest_idx = 0;

    for (int i = 0;i < n;i++) {
        if (arr[i] > Largest) {
            Largest = arr[i];
            Largest_idx = i;
        }
    }

    int *ptr = &arr[Largest_idx];

    return ptr;
}

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);

    printf("Largest Number : %d",*LargestNumber(Array,5));

    return 0;
}