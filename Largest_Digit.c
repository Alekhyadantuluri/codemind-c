#include<stdio.h>
int main()
{
    int n,r,i,max=-999;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(max<r)
        {
            max=r;
        }
        n=n/10;
    }
    printf("%d",max);
}