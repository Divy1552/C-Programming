# include <stdio.h>
# include <string.h>
 
int isSubstring(char String[],char Substring[]) {

    if (strlen(Substring) > strlen(String))
        return 0;
     
    for (int i = 0;i <= strlen(String) - strlen(Substring);i++) {
        for (int j = 0;j < strlen(Substring);j++) {

            if (String[i+j] != Substring[j])
                break;

            if (j == strlen(Substring) - 1)
                return 1;

        }
    }

    return 0;  
}

int main() {

    char String[100];
    printf("Enter String : ");
    scanf("%[^\n]*%c",String);

    char Substring[100];
    printf("Enter Substring : ");
    scanf("%s",Substring);

    if (isSubstring(String,Substring))
        printf("\"%s\" is a Substring of \"%s\"\n",Substring,String);
    else
        printf("\"%s\" is not a Substring of \"%s\"\n",Substring,String);

    return 0;
}