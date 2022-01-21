#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    for(r=1;r<n;r++)
    {
        if(n%r==0)
        {
            sum=sum+r;
        }
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}