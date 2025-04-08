# include <stdio.h>

struct Student {

    long int Roll_Number;
    char Name[50];
    int Marks;

};

void inputDetails(struct Student Students[],int n) {

    for (int i = 0;i < n;i++) { 

        printf("\nfor Student %d,\n",i+1);

        printf("Enter Roll Number : ");
        scanf("%ld",&(Students[i]).Roll_Number);

        printf("Enter Name : ");
        scanf("\n%[^\n]%*c",Students[i].Name);

        printf("Enter Marks : ");
        scanf("%d",&Students[i].Marks);

    }

}

int main() {

    int n;
    printf("Enter Total Number of Students : ");
    scanf("%d",&n);

    struct Student Students[n];

    inputDetails(Students,n);

    for (int i = 0;i < n;i++) {

        if (Students[i].Marks >= 75 || Students[i].Marks <= 30) {

            printf("\nStudent %d\n",i+1);

            printf("    Roll Number : %ld\n",Students[i].Roll_Number);
            printf("    Name : %s\n",Students[i].Name);
            printf("    Marks : %d\n",Students[i].Marks);

        }

    }

    return 0;
}