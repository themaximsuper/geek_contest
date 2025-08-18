#include <stdio.h>

int main () {
    short N;
    scanf("%hi", &N);

    int first_array_half[N / 2];
    int second_array_half[N / 2];

    for (short i = 0; i < N / 2; i ++) {
        scanf("%d", &first_array_half[i]);
    }

    for (short i = 0; i < N / 2; i ++) {
        scanf("%d", &second_array_half[i]);
    }

    for (short i = 0; i < N / 4; i ++) {
        int first_arr_elements[2], second_arr_elements[2];

        first_arr_elements[0] = first_array_half[i];
        first_arr_elements[1] = first_array_half[(N / 2) - 1 - i];

        second_arr_elements[0] = second_array_half[i];
        second_arr_elements[1] = second_array_half[(N / 2) - 1 - i];

        first_array_half[i] = first_arr_elements[1];
        first_array_half[(N / 2) - 1 - i] = first_arr_elements[0];

        second_array_half[i] = second_arr_elements[1];
        second_array_half[(N / 2) - 1 - i] = second_arr_elements[0];
    }
    
    for (short i = 0; i < N / 2; i ++) {
        printf("%d ", first_array_half[i]);
    }

    for (short i = 0; i < N / 2; i ++) {
        printf("%d ", second_array_half[i]);
    }

    return 0;
}