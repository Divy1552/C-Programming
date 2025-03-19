# include <stdio.h>
# include <string.h>

int main() {

    char str[100];
    printf("Enter String : ");
    scanf("%s",str);

    for (int i = 0;str[i] != '\0';i++) {

        int isUnique = 1;
        
        for (int j = 0;str[j] != '\0';j++) {

            if (str[j] == str[i]  && j != i) {
                isUnique = 0;
                break;
            }

        }

        if (isUnique) {

            printf("First Non-Repeating Character : %c\n",str[i]);

            return 0;
        }

    }

    printf("No Unique Character found in a String");

    return 0;
}