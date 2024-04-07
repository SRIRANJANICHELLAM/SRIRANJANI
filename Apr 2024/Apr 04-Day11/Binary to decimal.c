#include <stdio.h>
#include<math.h>
int main()
{
    long p;
    int r,d=0;
    scanf("%ld",&p);
    for(int i=0;n>0;i++)
    {
        r=n%10;
        d=d+(r*pow(2,i));
        n=n/10;
    }
    printf("%ld",d);
    return 0;
}

/* 
output:
1001
9
*/
