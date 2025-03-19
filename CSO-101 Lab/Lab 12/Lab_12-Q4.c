# include <stdio.h>
# include <string.h>

int main() {

    char str[100];
    printf("Enter String : ");
    scanf("%[^\n]*%c",str);

    int spaces_idx[100],spaces_count = 0;

    for (int i = 0;i < strlen(str);i++)
        if (str[i] == ' ')
            spaces_idx[spaces_count++] = i;

    if (spaces_count == 0) {
        printf("Longest Word : %s\n",str);
        return 0;
    }

    int max_word_len = spaces_idx[0],max_space_idx = 0;

    for (int i = 1;i < spaces_count;i++) {

        int word_len = spaces_idx[i] - spaces_idx[i-1] - 1;

        if (word_len > max_word_len) {
            max_word_len = word_len;
            max_space_idx = i;
        }

    }

    int last_word_len = strlen(str) - spaces_idx[spaces_count - 1] - 1;

    if (last_word_len > max_word_len) {
        max_word_len = last_word_len;
        max_space_idx = spaces_count;
    }

    printf("Longest Word : ");

    int start = (max_space_idx == 0) ? 0 : spaces_idx[max_space_idx - 1] + 1;
    int end = (max_space_idx == spaces_count) ? strlen(str) : spaces_idx[max_space_idx];

    for (int i = start;i < end;i++)
        printf("%c",str[i]);

    return 0;
}