#include<stdio.h>

int main(){
    int a,i;
    i=1;
    printf("enter a number:");
    scanf("%d",&a);
    do{
        printf("%d X %d = %d\n",a,i,a*i);
        i++;
    }while(i<=10);
    
    return 0;
}