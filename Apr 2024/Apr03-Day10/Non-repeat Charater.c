#include <stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%s",&n);
    int u[100]=0;
    for(int i=0;i<strlen(n);i++)
    {
        u[n[i]]++;
    }
    for(i=0;i<strlen(n);i++)
    {
        if(u[n[i]]==1)
        {
            printf("%c ",n[i]);
        }
    }
    return 0;
}

/* output:
hello
h e o
*/
