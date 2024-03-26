#include <stdio.h>

void main()
{
    int phy, chem, maths;
    float total;
    printf("enter marks in physics:");
    scanf("%d", &phy);
    printf("enter marks in chemistry:");
    scanf("%d", &chem);
    printf("enter marks in maths:");
    scanf("%d", &maths);
    total = phy + maths + chem/3;
    if ((total < 40) || phy<33||chem<33||maths<33)
    {
        printf("your percentage is %f and you are fail\n",total);
        }
    else
        {
            printf("your percentage is %f and you are pass\n",total);
        }
        getchar;
}
