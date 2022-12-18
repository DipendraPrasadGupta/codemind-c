#include<stdio.h>
int pal(int n);
int prime(int n);
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=n+1; ; i++)
    {
      if(pal(i) && prime(i))
      {
          printf("%d",i);
          break;
      }
       
    }
}
int pal(int n)
{
    int rev=0,rem;
    int pal=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(pal==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int prime(int n)
{
    int i,c=0;
    for(i=1; i<=n; i++)
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