//WAP to find factorial of a number. (Using loop)

#include<stdio.h>
void main(){
    int n,fact=1;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
}