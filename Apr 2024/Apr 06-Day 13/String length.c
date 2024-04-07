#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s",&s);
    int length = strlen(s);
    printf("The length of the string is %d\n", length);
    return 0;
}

/* 
output:
World
The length of the string is 5
*/
