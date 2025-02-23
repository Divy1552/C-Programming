# include <stdio.h>
# include <ctype.h>

int main() {

    char ch_lowercase;
    printf("Enter a Character : ");
    scanf("%c",&ch_lowercase);

    char ch_uppercase = toupper(ch_lowercase);

    printf("Uppercase of Character : %c",ch_uppercase);
    
    return 0;
}