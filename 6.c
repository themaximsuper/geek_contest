#include <stdio.h>

int main () {

    int n, m;
    short k;
    scanf("%d %hu %d", &n, &k, &m);

    short stations_statuses[n];

    for (int i = 0; i < n; i ++) {
        stations_statuses[i] = k;
    }

    char output[m*2+1];
    int index = 0;

    for (int request = 0; request < m; request ++) {

        int x, y;
        scanf("%d %d", &x, &y);

        short flag = 0;

        for (int station = x; station < y; station ++) {

            if (stations_statuses[station] > 0) {
                stations_statuses[station] --;
            } else {
                output[index] = '0';
                index ++;
                output[index] = '\n';
                index ++;
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            output[index] = '1';
            index ++;
            output[index] = '\n';
            index ++;
        }

    }
    
    output[index] = '\0';
    printf("%s\n", &output[0]);

    return 0;
}