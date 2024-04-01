Factorial
#include <stdio.h>
int main()
{
   int n;
   int a=1;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       a=a*i;
   }
   printf("Factorial of %d = %d",n,a);
   return 0;
}

/*output
5
Factorial of 5 = 120*/
