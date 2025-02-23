# include <stdio.h>

void printArray(int arr[],int n) {

    for (int i = 0;i < n;i++)
        printf("%d ",arr[i]);

}

void reverseArray(int arr[],int n) {

    int _arr[n];

    for (int i = 0;i < n;i++)
        _arr[i] = arr[n-1-i];

    for (int i = 0;i < n;i++)
        arr[i] = _arr[i];

}

void main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);

    reverseArray(Array,n);

    printf("Reversed Array : ");

    printArray(Array,n);
    
}