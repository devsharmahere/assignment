#include<stdio.h>

int main(){
    int i,m;
    printf("enter a number:");
    scanf("%d",&m);
    for(i=m;i;i--){
        printf("the natural numbers are:%d\n",i);
    }
    return 0;
}