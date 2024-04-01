#include<stdio.h>

int main(){
    int i,n;
    i=1;
    printf("enter a number:");
    scanf("%d",&n);
    do{
        printf("the natural numbers are %d \n",i);
        i++;
    }
    while(i<=n);

    return 0;
}