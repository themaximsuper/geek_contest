#include <stdio.h>

int main () {
    short n;
    scanf("%hi", &n);

    int first_array_half[n / 2];
    int second_array_half[n / 2];

    for (short i = 0; i < n / 2; i ++) {
        scanf("%d", &first_array_half[i]);
    }

    for (short i = 0; i < n / 2; i ++) {
        scanf("%d", &second_array_half[i]);
    }

    for (short i = 0; i < n / 4; i ++) {
        int first_arr_elements[2], second_arr_elements[2];

        first_arr_elements[0] = first_array_half[i];
        first_arr_elements[1] = first_array_half[(n / 2) - 1 - i];

        second_arr_elements[0] = second_array_half[i];
        second_arr_elements[1] = second_array_half[(n / 2) - 1 - i];

        first_array_half[i] = first_arr_elements[1];
        first_array_half[(n / 2) - 1 - i] = first_arr_elements[0];

        second_array_half[i] = second_arr_elements[1];
        second_array_half[(n / 2) - 1 - i] = second_arr_elements[0];
    }
    
    for (short i = 0; i < n / 2; i ++) {
        printf("%d ", first_array_half[i]);
    }

    for (short i = 0; i < n / 2; i ++) {
        printf("%d ", second_array_half[i]);
    }

    return 0;
}