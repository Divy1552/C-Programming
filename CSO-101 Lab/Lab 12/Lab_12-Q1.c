# include <stdio.h>
# include <string.h>

int main() {

    char str[100];
    printf("Enter String : ");
    scanf("%s",str);

    char _str[100];

    for (int i = 0;str[i] != '\0';i++) {
        _str[(strlen(str)-1) - i] = str[i];
    }

    _str[strlen(str)] = '\0';

    for (int i = 0;str[i] != '\0';i++) {
        str[i] = _str[i];
    }

    printf("Revesed String : %s",str);

    return 0;
}