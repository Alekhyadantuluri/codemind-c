#include<stdio.h>
int main()
{
    int a[100],n,i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int count=0,r;
        while(a[i]>0)
        {
            r=a[i]%10;
            count=count+1;
            a[i]=a[i]/10;
        }
        if(count%2==0)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
}