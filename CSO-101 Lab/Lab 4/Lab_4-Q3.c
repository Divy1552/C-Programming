# include <stdio.h>
# include <ctype.h>
# include <string.h>

void main() {
    
    char str[100];
    printf("Enter String : ");
    scanf("%[^\n]%*c",str);

    int Vowels_Count = 0,Consonants_Count = 0;

    for (int i = 0;str[i] != '\0';i++) {

        if (isalpha(str[i]) && strchr("aAeEiIoOuU",str[i]))
            Vowels_Count += 1;
        else if (isalpha(str[i]) && !strchr("aAeEiIoOuU",str[i]))
            Consonants_Count += 1;
        else
            continue;
    }

    printf("Vowels : %d\n",Vowels_Count);
    printf("Consonants : %d\n",Consonants_Count);
}