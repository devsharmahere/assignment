#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    printf("enter third number:");
    scanf("%d", &c);
    printf("enter fourth number:");
    scanf("%d", &d);
    if (a > b && a > c && a > d){
        printf("%d is the greatest number among all\n", a);
        }
        else if (b > a && b > c && b > d)
         {
        printf("%d is the greatest number among all\n", b);
         }
         else if(c > b && c > a && c > d)
          {
             printf("%d is the greatest number among all\n", c);
              }
              else
                {
                printf("%d is the greatest number among all\n", d);
                 }
    return 0;
}