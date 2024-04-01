int main()
{
    int m,i,j,k;
    scanf("%d",&m);
    for(i=m;i>=1;--i)
   {
       for(j=1;j<=m-i;++j)
       {
           printf(" ");
       }
       for(k=1;k<=i;++k)
       {
           printf("*");
       }
       printf("\m");
   }
   return 0;
}

/*
Output:
5
*****
 ****
  ***
   **
    *     */
