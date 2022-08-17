#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int s,h,m;
    printf("Enter the number of second: ");
    scanf("%d",&s);

    h=(s/3600)/60;
    m=s%60;
    printf("The hour is %d %d",h,m);
}