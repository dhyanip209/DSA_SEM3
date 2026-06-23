//WAP to reverse a number.
#include<stdio.h>
void main(){
    int n,digit,rev=0;
    printf("enter n");
    scanf("%d",&n);

    while(n>0){
        digit=n%10;
        n=n/10;
         rev=(rev*10)+digit;
    }
    printf("%d",rev);
}
