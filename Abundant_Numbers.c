#include<stdio.h>
int main()
{
    int n,i,fac=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            fac=fac+i;
        }
    }
    if(fac>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}