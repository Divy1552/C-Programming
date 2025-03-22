# include <stdio.h>
# include <string.h>

int main() {

    char str[100];
    printf("Enter String : ");
    scanf("%s",str);

    int score = 0;

    for (int i = 0;i < strlen(str)-1;i++)

        if (str[i] > str[i+1]) score += str[i] - str[i+1];
        else score += str[i+1] - str[i];

    printf("Score of String : %d",score);

    return 0;
}