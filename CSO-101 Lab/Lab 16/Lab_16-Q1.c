# include <stdio.h>

int main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);

    for (int i = 1;i < n;i++) {

        int isSorted = 1;

        for (int j = i-1;j < n-1;j++)
            if (Array[j] > Array[j+1])
                isSorted = 0;

        if (isSorted == 1) break;

        for (int j = i;j > 0;j--) {

            if (Array[j] < Array[j-1]) {

                int temp = Array[j];
                Array[j] = Array[j-1];
                Array[j-1] = temp;

            } else break;
        
        }

    }

    printf("Sorted Array : ");

    for (int i = 0;i < n;i++)
        printf("%d ",Array[i]);

    return 0;
}