#include<stdio.h>
int pal(int n);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    
    for(int i=a; i<=b; i++)
    {
        if(pal(i))
        {
            printf("%d ",i);
        }
    }
}
int pal(int n)
{
    int temp=n,rem,rev=0;
   while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}