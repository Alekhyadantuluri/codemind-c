#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,per;
    scanf("%d",&n);
    for(i=0;i<=sqrt(n);i++)
   {
       per=i*i;
    }
    if(per==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}