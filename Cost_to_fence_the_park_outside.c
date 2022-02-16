#include<stdio.h>
int main()
{
    int l,b,w,c,area,total;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=(l+2*w)*(b+2*w)-l*b;
    total=area*c;
    printf("%d",total);
}