#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,x;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        x=a[i]+b[i];
        printf("%d ",x);
    }
}