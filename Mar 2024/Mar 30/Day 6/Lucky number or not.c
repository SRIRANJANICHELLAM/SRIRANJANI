Lucky number or not
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        if(a%2!=0){
            b+=a;
        }
        n/=10;
    }
    if(b%2==0){
        printf("lucky number");
    } 
    else
    {
        printf("not lucky number");
    }
}
