# include <stdio.h>
# include <string.h>

char *my_strcat(char *str1,const char *str2) {

    int length = 0;

    for (int i = 0;str1[i] != '\0';i++)
        length += 1;

    int i;

    for (i = 0;str2[i] != '\0';i++)
        str1[length + i] = str2[i];

    str1[length + i] = '\0';

    return str1;
}

int my_strlen(const char *str) {

    int length = 0;

    for (int i = 0;str[i] != '\0';i++)
        length += 1;
        
    return length;
}

int my_strcmp(const char *str1,const char *str2) {

    for (int i = 0;str1[i] != '\0' || str2[i] != '\0';i++) {

        if (str1[i] != str2[i])
            return str1[i] - str2[i];

    }

    return 0;
}

char *reverse(char *str) {

    char _str[100];

    for (int i = 0;str[i] != '\0';i++) {
        _str[(strlen(str)-1) - i] = str[i];
    }

    _str[strlen(str)] = '\0';

    for (int i = 0;str[i] != '\0';i++) {
        str[i] = _str[i];
    }

    return str;
}

int main() {

    char str1[100];
    printf("Enter String 1 : ");
    scanf("%s",str1);

    char str2[100];
    printf("Enter String 2 : ");
    scanf("%s",str2);

    my_strcat(str1,str2);

    printf("Concatenated String : %s\n",str1);

    printf("Length of String 1 : %d\n",my_strlen(str1));

    printf("Length of String 2 : %d\n",my_strlen(str2));

    if (my_strcmp(str1,str2) > 0)
        printf("\"%s\" > \"%s\"\n",str1,str2);
    else if (my_strcmp(str1,str2) < 0)
        printf("\"%s\" < \"%s\"\n",str1,str2);
    else
        printf("\"%s\" = \"%s\"\n",str1,str2);

    printf("Reversed String 1 : %s\n",reverse(str1));

    printf("Reversed String 2 : %s\n",reverse(str2));

    return 0;
}