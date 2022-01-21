#include<stdio.h>
int main()
{
    int n,r,sum=0,pro=1;
    scanf("%d",&n);
    for(n>0;r=n%10;n=n/10)
    {
        sum=sum+r;
        pro=pro*r;
    }
    printf("%d",pro-sum);
}