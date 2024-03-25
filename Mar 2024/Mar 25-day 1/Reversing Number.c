1.Reversing of a number
#include<stdio.h>
int main() {

  int n, reverse = 0, d;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) {
    d = n % 10;
    reverse = reverse * 10 + d;
    n /= 10;
  }
  printf("%d", reverse);
}
o/p:Enter an integer: 2345
Reversed number = 5432
