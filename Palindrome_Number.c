#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,rev,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=a[i];
        rev=0;
        while(j>0)
        {
            r=j%10;
            rev=(rev*10)+r;
            j=j/10;
        }
        if(rev==a[i])
        printf("True
");
        else
        printf("False
");
    }
}
