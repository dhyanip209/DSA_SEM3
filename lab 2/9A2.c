//WAP to find power of a number using loop.
#include<stdio.h>
void main(){
    int x,y,ans=1;
    printf("enter x,y");
    scanf("%d %d",&x,&y);
    for(int i=0;i<y;i++){
        ans=ans*x;
    }
    printf("%d",ans);
}