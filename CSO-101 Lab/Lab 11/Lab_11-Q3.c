# include <stdio.h>

int *frequency(int arr[],int n,int *k) {

    int frequency = 0;

    for (int i = 0;i < n;i++)
        if (arr[i] == *k)
            frequency++;

    int *ptr = &frequency;

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

    int k;
    printf("k = ");
    scanf("%d",&k);

    printf("Frequency of k : %d",*frequency(Array,n,&k));

    return 0;
}