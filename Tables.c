#include<stdio.h>
int main()
{
    int n,r,i,tab;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
      tab=n*i;
       if(i%2!=0)
    {
        printf("%d x %d = %d
",n,i,tab);
    }
    }
}