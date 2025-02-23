# include <stdio.h>

int main() {
    
    char str[100];
    printf("Enter String : ");
    scanf("%[^\n]%*c",str);

    // %s Conversion Specifier is used to read Strings without Spaces or to write a String.
    // %[^\n]%*c Conversion Specifier is used to read Strings with Spaces.
    
    printf("Entered String : %s\n",str);

    return 0;
}