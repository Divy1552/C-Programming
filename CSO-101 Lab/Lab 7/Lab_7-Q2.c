# include <stdio.h>
# include <string.h>

void remove_Duplicates(char str[],char _str[]) {

    int j = 0;

    for (int i = 0;str[i] != '\0';i++)

        if (!strchr(_str,str[i])) {
            _str[j] = str[i];
            j++;
        }
    
    _str[j] = '\0';
}

int main() {

    char str[100];
    printf("Enter String : ");
    scanf("%s",&str);

    char _str[100] = "";
    remove_Duplicates(str,_str);

    printf("String (without Repetition) : %s\n",_str);

    return 0;
}