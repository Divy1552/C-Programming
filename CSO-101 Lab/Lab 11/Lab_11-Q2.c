# include <stdio.h>

void rotate_Array(int arr[],int n,int *k) {

    *k = *k % n;

    for (int i = *k;i < n;i++)
        printf("%d ",arr[i]);

    for (int i = 0;i < *k;i++)
        printf("%d ",arr[i]);

    printf("\n");

}

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);

    int k;
    printf("k = ");
    scanf("%d",&k);

    printf("Original Array : ");

    for (int i = 0;i < n;i++)
        printf("%d ",Array[i]);

    printf("\n");

    printf("Rotated Array : ");

    rotate_Array(Array,n,&k);

    return 0;
}