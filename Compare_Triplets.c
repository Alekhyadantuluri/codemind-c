#include<stdio.h>
int main()
{
    int a[3],b[3],i,j,sum=0,odd=0;
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(j=0;j<3;j++)
    scanf("%d",&b[j]);
    for(i=0,j=0;i<3 && j<3;i++,j++)
    {
     if(a[i]>b[j])
     {
         sum++;
     }
     else if(a[i]<b[j])
     {
         odd++;
     }
    }
    printf("%d %d",sum,odd);
}