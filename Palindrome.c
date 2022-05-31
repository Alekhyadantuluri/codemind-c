#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,rev=0,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(temp==rev)
    printf("True");
    else
    printf("False");
}