Inverted Left Pyramid

int main() {
    int p,i,j;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        for(j=0;j<p-i;j++)
        {
            printf("* ");
        }
        printf("\p");
    }
}

/*output:
* * * * * 
* * * * 
* * * 
* * 
*       */
