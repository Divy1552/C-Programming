# include <stdio.h>

int main() {
    
    int Array[] = {1,2,3,4,5};

    printf("Array : [");

    for (int i = 0;i < sizeof(Array)/sizeof(int);i++) {

        if (i == sizeof(Array)/sizeof(int) - 1)
            printf("%d",Array[i]);
        else
            printf("%d,",Array[i]);
    
    }

    printf("]\n");

    int Check_Number;
    printf("Number to Check : ");
    scanf("%d",&Check_Number);

    for (int i = 0;i < sizeof(Array)/sizeof(int);i++) {

        if (Array[i] == Check_Number) {
            printf("Yes\n");
            break;
        } else if (i == (sizeof(Array)/sizeof(int)) - 1)
            printf("No\n");

    }

    return 0;
}