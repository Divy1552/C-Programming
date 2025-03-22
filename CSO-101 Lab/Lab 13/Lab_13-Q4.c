# include <stdio.h>

int count = 0;

void findSubarrays(int Array[],int n,int idx,int Sum,int SubarraySize) {
    
    if (idx == n) {
        
        if (Sum == 0 && SubarraySize > 0) {
            printf("%d ",SubarraySize);
            count += 1;
        }

        return;
    }

    findSubarrays(Array,n,idx + 1,Sum + Array[idx],SubarraySize + 1);
    findSubarrays(Array,n,idx + 1,Sum,SubarraySize);
}

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);

    printf("Subarray Sizes with Sum = 0 : ");
    findSubarrays(Array,n,0,0,0);

    if (count == 0)
        printf("%d\n",count);
    
    return 0;
}