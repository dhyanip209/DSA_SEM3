// WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n).
#include<stdio.h>
void main(){
     int n;
    printf("enter n");
    scanf("%d",&n);
    int ans=0,sum=0;
    for(int i=1;i<=n;i++){
        ans=ans+i;
        sum=sum+ans;
    }
    printf("%d",sum);
}
