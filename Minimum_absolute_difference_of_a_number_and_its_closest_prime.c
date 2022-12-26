#include<stdio.h>
int prime(int );
int main()
{
    int n;
    scanf("%d",&n);
    int fd,bd,fn,bn;
    for(int i=n; ; i++)
    {
        if(prime(i))
        {
            fd=i;
            break;
        }
    }
    for(int j=n; ; j--)
    {
        if(prime(j))
        {
            bd=j;
            break;
        }
    }
    
    fn=fd-n;
    bn=n-bd;
    
    if(fn>=bn)
    {
        printf("%d",bn);
    }
    else if(fn<=bn)
    {
        printf("%d",fn);
    }
    
}
int prime(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1; 
    }
    else
    {
        return 0;
    }
}