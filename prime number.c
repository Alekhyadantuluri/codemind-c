#include<stdio.h>
#include<math.h>
int main()
    {
        int n,i,is_prime=1;
        scanf("%d",&n);
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                is_prime=0;
            }
        }
        if(is_prime==1)
        {
            printf("prime");
        }
        else
        {
            printf("not a prime");
        }
    }