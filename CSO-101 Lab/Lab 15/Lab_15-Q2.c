# include <stdio.h>

int main() {

    int t;
    printf("Number of Test Cases : ");
    scanf("%d",&t);

    int n[t];

    for (int i = 0;i < t;i++) {
        printf("Enter Test Case %d : ",i+1);
        scanf("%d",&n[i]);
    }

    for (int i = 0;i < t;i++)
        printf("Cloudberries needed (in kg) for Test Case %d : %d\n",i+1,2 * n[i]);

    return 0;
}