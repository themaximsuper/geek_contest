#include <stdio.h>

int main () {
    unsigned short max_length;

    short has_y;
    unsigned short word_length;

    char string[10000];
    fgets(string, 10000, stdin);

    for (int index = 0; index < sizeof(string)/8; index++) {
    
        if (string[index] == '?') {
            break;
        } else if (string[index] == ' ') {
            has_y = 0;
            word_length = 0;
        } else if (string[index] == 'Y') {
            has_y = 1;
        }else {

            if (has_y == 0) {
                word_length += 1;
                
                if (max_length < word_length) {
                    max_length = word_length;
                }

            }

        }

    }

    printf("%hu", max_length);

    return 0;
}