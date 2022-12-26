#include<stdio.h>
int pal(int);
int main()
{
    int n; 
    scanf("%d",&n);
    n=pal(n)+n;
    while(n!=pal(n))
    {
        n=pal(n)+n;
    }
    printf("%d",n);
}
int pal(int n)
{
    int pal,rem,rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
   return rev;
}