#include <stdio.h>
int main() {
    int n1, n2, i, Hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
         if (n1 % i == 0 && n2 % i == 0)
            Hcf = i;
    }
    printf("G.C.D of %d and %d is %d", n1, n2, Hcf);
    return 0;
}

o/p:
  Enter two integers: 81 153
H.C.F of 81 and 153 is 9
