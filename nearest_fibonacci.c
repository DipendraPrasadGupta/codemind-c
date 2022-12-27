#include<stdio.h>
int fab(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int fd,bd,fn,bn;
    for(int i=n; ; i++)
    {
        if(fab(i))
        {
            fd=i;
            break;
        }
    }
    for(int j=n; ; j--)
    {
        if(fab(j))
        {
            bd=j;
            break;
        }
    }
    
    fn=fd-n;
    bn=n-bd;
    
    if(fn>bn)
    {
        printf("%d",bd);
    }
    else if(fn<bn)
    {
        printf("%d",fd);
    }
    else if(fn==bn)
    {
        printf("%d %d",bd,fd);
    }
}
int fab(int n)
{
    int a,b,c;
    if(n==0 || n==1)
    {
        printf("%d",n);
    }
    else
    {
        a=0;
        b=1;
        c=a+b;
    }
    while(n>c)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(n==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}