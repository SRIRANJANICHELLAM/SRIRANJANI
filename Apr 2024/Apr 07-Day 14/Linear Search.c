// linear search

#include<stdio.h>
int main(){
    int n,i,key,ind=-1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i< n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++) {
        if(arr[i]==key){
            ind=i;
            break;
        }
    }
    if(ind!=-1) {
        printf("element found at index %d\n",ind);
    }
    else{
        printf("element not found\n");
    }
}

