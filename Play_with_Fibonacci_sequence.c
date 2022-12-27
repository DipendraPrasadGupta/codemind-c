#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=1; i<=n-2; i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        c=a+b;
    }
}