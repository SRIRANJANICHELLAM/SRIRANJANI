#include<stdio.h>  
int main()    
{    
int num,d,sum,temp;    
scanf("%d",&num);    
temp=num;    
while(num>0)    
{    
d=num%10;    
sum=sum+(d*d*d);    
num=num/10;    
}    
if(temp==sum)    
printf("armstrong  number");    
else    
printf("not armstrong number");    
}   
