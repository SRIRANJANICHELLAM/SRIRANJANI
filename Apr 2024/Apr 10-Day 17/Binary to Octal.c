#include <stdio.h>
int main() {
    long long a;
    int o = 0, d = 0, i = 0;
    scanf("%lld", &a);
    while (a != 0) {
        d += (a % 10) * (1 << i);
        ++i;
         a /= 10;
    }
    i = 1;
    while (d!= 0) {
        o+= (d % 8) * i;
        d /= 8;
        i *= 10;
    }
    printf(" %d", o);
    return 0;
}

O/P:
  Enter a binary number: 101001
  51 in octal
