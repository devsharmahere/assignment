#include<stdio.h>

int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d,%d",&a,&b);
    if (a>b){
        printf("the greater number is  %d \n",a);
    }
    else {
        printf("the greater number is %d \n ",b);
    }

    
    return 0;
}