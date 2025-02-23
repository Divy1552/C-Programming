# include <stdio.h>
# include <math.h>
# include <string.h>

void main() {

    char Num[10];
    printf("Enter Number : ");
    scanf("%s",Num);

    int _Num = 0;
    
    for (int i = 0;i < strlen(Num);i++) {

        if (Num[i] >= '0' && Num[i] <= '9') {
            _Num += (Num[strlen(Num)-1-i] - '0') * round(pow(10,i));
        } else {
            printf("Invalid Number!\n");
            return;
        }
        
    }

    printf("Number (as int) : %d",_Num);
}