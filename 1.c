#include <stdio.h>

int main () {
    long long A, B, C, D;
    scanf("%lld\n%lld\n%lld\n%lld", &A, &B, &C, &D);

    char output[21]; 
    sprintf(output, "%lld", A + B * B * C * D);

    printf("%s", output);
    
    return 0;
}