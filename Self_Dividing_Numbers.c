#include<stdio.h>
int self(int );
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a; i<=b; i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}
int self(int n)
{
    int t=n,rem;
    while(n!=0)
    {
        rem=n%10;
        if(rem!=0)
        {
            if(t%rem!=0)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
    }
