# include <stdio.h>

int count = 0;

void printSubarray(int Subarray[],int SubarraySize) {

    printf("[");

    for (int i = 0;i < SubarraySize;i++)
        printf("%d,",Subarray[i]);

    printf("\b],");

}

void findSubarrays(int Array[],int n,int Target_Sum,int idx,int Sum,int Subarray[],int SubarraySize) {
    
    if (idx == n) {
        
        if (Sum == Target_Sum) {
            printSubarray(Subarray,SubarraySize);
            count++;
        }

        return;
    }

    Subarray[SubarraySize] = Array[idx];

    findSubarrays(Array,n,Target_Sum,idx + 1,Sum + Array[idx],Subarray,SubarraySize + 1);
    findSubarrays(Array,n,Target_Sum,idx + 1,Sum,Subarray,SubarraySize);
}

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);
    
    int Target_Sum;
    printf("Target Sum : ");
    scanf("%d",&Target_Sum);

    int Subarray[n];
    printf("Subarrays : {");
    findSubarrays(Array,n,Target_Sum,0,0,Subarray,0);

    if (count == 0)
        printf("\b{}");
    else
        printf("\b}");
    
    return 0;
}