#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    scanf("%d",&n);
    int a=n%1000;
    int temp=a;
    int b=n-a;
    while(a!=0)
    {
        rem=a%10;
       rev=rev*10+rem;
        a=a/10;
    }
   int c=b+rev;
    printf("%d",c);
    
    
}