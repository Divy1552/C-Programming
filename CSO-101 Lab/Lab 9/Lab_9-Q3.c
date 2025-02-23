# include <stdio.h>

void checkPalindrome(int arr[],int n) {

    int _arr[n];

    for (int i = 0;i < n;i++)
        _arr[i] = arr[n-1-i];

    for (int i = 0;i < n;i++) {

        if (arr[i] != _arr[i]) {
            printf("Array is not a Palindrome");
            break;
        } else if (i == n-1)
            printf("Array is a Palindrome");
    
    }
}

void main() {

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int Array[n];
    printf("Enter Elements of Array : ");

    for (int i = 0;i < n;i++)
        scanf("%d",&Array[i]);

    checkPalindrome(Array,n);
    
}