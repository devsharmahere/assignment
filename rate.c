#include <stdio.h>

int main()
{
    int rating;
    printf("please enter your rating from 1-5:");
    scanf("%d", &rating);
    switch (rating){
         case 1:
         printf("your rating is 1 star\n");
          break;
          case 2:
          printf("your rating is 2 star\n");
          break;
          case 3:
          printf("your rating is 3 star\n");
          break;
          case 4:
          printf("your rating is 4 star\n");
          break;
          case 5:
           printf("your rating is 5 star\n");
           break;
           default:
           printf("enter a valid input\n");
           }
            return 0;
}