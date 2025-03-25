# include <stdio.h>

char *my_strcpy(char *str1,const char *str2) {

    int i;

    for (i = 0;str2[i] != '\0';i++)
        str1[i] = str2[i];

    str1[i] = '\0';

    return str1;
}

int main() {

    char str1[100];
    printf("Enter String 1 : ");
    scanf("%[^\n]*%c",str1);

    printf("String 1 : %s\n",str1);
    
    char str2[100];
    
    my_strcpy(str2,str1);

    printf("String 2 : %s\n",str2);
    
    return 0;
}