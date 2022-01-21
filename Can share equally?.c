#include<stdio.h>
int main()
{
    int x,y,a;
    scanf("%d%d",&x,&y);
    a=(x*1)+(y*2);
    if(x==0&&y%2==0)
    {
        printf("YES");
    }
    else if(x==0&&y%2!=0)
    {
        printf("NO");
    }
    else if(a%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}