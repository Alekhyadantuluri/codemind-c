#include<stdio.h>
int main()
{
    int num1,num2,d,i,count=0;
    scanf("%d%d%d",&num1,&num2,&d);
    for(i=num1;i<=num2;i++)
    {
        if(i%d==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}
