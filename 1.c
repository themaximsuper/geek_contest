#include <stdio.h>

int main () {
    long long a, b, c, d;
    scanf("%lld\n%lld\n%lld\n%lld", &a, &b, &c, &d);

    char output[21]; 
    sprintf(output, "%lld", a + b * b * c * d);

    printf("%s", output);
    
    return 0;
}