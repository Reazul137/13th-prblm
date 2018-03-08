#include<stdio.h>
int main()
{
    int x, y, z, average, max;

    printf("write the first integer : ");
    scanf("%d",&x);

    printf("write the second integer : ");
    scanf("%d",&y);

    printf("write the third integer : ");
    scanf("%d",&z);

    average=(x+y+abs(x-y))/2;
    max=(average+z+abs(average-z))/2;

     printf("Maximum value of three integers: %d", max);
    return 0;
}
