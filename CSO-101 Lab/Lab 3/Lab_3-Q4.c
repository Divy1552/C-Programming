# include <stdio.h>

int main() {
    
    int m1,m2,m3,m4,m5;
    printf("Enter Marks of 5 Subjects : ");
    scanf("%d,%d,%d,%d,%d",&m1,&m2,&m3,&m4,&m5);

    float average;
    average = (float) (m1+m2+m3+m4+m5)/5;

    printf("Average of Marks of 5 Subjects : %.2f",average);

    return 0;
}