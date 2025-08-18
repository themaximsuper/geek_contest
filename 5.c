#include <stdio.h>

int main () {

    short N, K;

    scanf("%hu", &N);
    scanf("%hu", &K);
    
    short start_point[K];

    for (short el = K; el > 0; el --) {
        start_point[K - el] = el;
    }

    short flag = 1;
    short pointer = 0;

    while (1) {

        if (flag == 1) {
            
            for (short i = 0; i < sizeof(start_point) / sizeof(start_point[0]); i ++) {
                printf("%hu ", start_point[i]);
            }

            printf("\n");
            flag = 0;
        }

        if (pointer == 0) {

            if (start_point[0] < N) {
                start_point[0] ++;
                pointer = 1;
                flag = 1;
            } else {
                break;
            }

        } else {

            if (pointer > K - 1) {
                pointer = K - 1;
            }

            if (start_point[pointer] < start_point[pointer - 1] - 1) {
                start_point[pointer] ++;
                pointer ++;
                flag = 1;
            } else {
                start_point[pointer] = K - pointer;
                pointer --;
            }

        }

    }

    return 0;
}