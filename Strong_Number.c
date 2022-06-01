#include<stdio.h>
int main()
{
    int n,r,sum=0,i,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        int pro=1;
        for(i=1;i<=r;i++)
        {
            pro=pro*i;
        }
        sum=sum+pro;
        n=n/10;
    }
    if(sum==temp)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
}