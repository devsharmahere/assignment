#include<stdio.h>

int main(){
    int fact,num,i;
    fact=1;
    i=1;
    printf("enter a number:");
    scanf("%d",&num);
    do{
        
         fact=fact*i;
         i++;
    }while(i<=num);
     printf("the factorial of the number is %d\n",fact);
    return 0;
}