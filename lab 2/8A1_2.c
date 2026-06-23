//WAP to find factorial of a number. (Using recursion)
#include<stdio.h>

int factorial(int x){
    if(x==0||x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
void main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("Factorial of %d is %d", n, factorial(n));
}