#include<stdio.h>

int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
   (age>=18) ? printf("you are eligible for voting\n"): printf("you are not eligible for voting\n");
   return 0;
}