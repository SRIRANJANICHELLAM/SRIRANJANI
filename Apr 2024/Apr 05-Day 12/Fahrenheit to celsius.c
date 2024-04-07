#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float q;
    q=((a-32)*5)/9;
    printf("Celsius : %.3f",q);
    return 0;
}

/* output
77
Celsius: 25.000
*/

