# include <stdio.h>

void Merge(int A[],int m,int B[],int n,int C[]) {

    int i = 0,j = 0,k = 0;

    while (k < m+n) {

        if (j == n || A[i] <= B[j])
            C[k++] = A[i++];

        if(i == m || A[i] > B[j])
            C[k++] = B[j++];

    }

}

void MergeSort(int A[],int start,int end,int B[]) {

    if (start == end) B[0] = A[start];

    if (start < end) {

        int mid = (start + end)/2;
    
        int Left[mid+1-start],Right[end-mid];

        MergeSort(A,start,mid,Left);
        MergeSort(A,mid+1,end,Right);

        Merge(Left,mid+1-start,Right,end-mid,B);

    }

}

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);

    int SortedArray[n];

    MergeSort(Array,0,n-1,SortedArray);

    printf("Sorted Array : ");

    for (int i = 0;i < n;i++)
        printf("%d ",SortedArray[i]);

    return 0;
}