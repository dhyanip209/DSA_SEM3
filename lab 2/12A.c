//WAP to check whether a number is prime or not
#include<stdio.h>
void main(){
    int n,count=0;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>2){
        printf("%d is not prime",n);
    }
    else{
        printf("%d is prime",n);
    }
}