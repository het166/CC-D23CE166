#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidString(const char *str) {
    int length = strlen(str);
    
    if (length < 2) {
        return 0; 
    }

    if (str[length - 1] != 'b' || str[length - 2] != 'b') {
        return 0;
    }

    
    for (int i = 0; i < length - 2; i++) {
        if (str[i] != 'a') {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char input[100]; 

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    
    input[strcspn(input, "\n")] = 0;

    if (isValidString(input)) {
        printf("Valid String\n");
    } else {
        printf("Invalid String\n");
    }

    return 0;
}
