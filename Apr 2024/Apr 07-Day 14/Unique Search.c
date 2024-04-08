//unique element in a array
#include<stdio.h>
int main(){
    int n,i,uniq=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
          uniq ^=arr[i];
    }
    printf(" %d", uniq);
