Power of number

int main()
{
    int a,b;
    int r=1,s;
    scanf("%d %d",&a,&b);
    s=b;
    while(b>0)
    {
        r=r*b;
        b--;
    }
    printf("%d power %d is:%d",a,s,r);
    return 0;
}

/* output:
4
2
4 power 2 is:16   */
