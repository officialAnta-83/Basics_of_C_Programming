#include <stdio.h>

void get_initials(const char *name, char *result) {
    int i = 0, j = 0, in_word = 0;
    while (name[i] != '\0') {
        if (name[i] == ' ' || name[i] == '\t' || name[i] == '\n') {
            in_word = 0;
        } else if (in_word == 0) {
            result[j++] = ' ';
            if (name[i] >= 'a' && name[i] <= 'z') {
                result[j++] = name[i] - 32;
            } else {
                result[j++] = name[i];
            }
            result[j++] = '.';
            in_word = 1;
        }
        i++;
    }
    result[j] = '\0';
}

int main() {
    char input_string[100] ;
    printf("\nEnter a string: \n");
    fgets( input_string, sizeof(input_string), stdin);
    char output_string[50];
    get_initials(input_string, output_string);
    printf("Original:  \"%s\"\n", input_string);
    printf("Converted: \"%s\"\n", output_string);
    return 0;
}
