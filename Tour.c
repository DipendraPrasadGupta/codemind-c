#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
    int n,m;
    scanf("%d%d",&n,&m);
    int a=n*5;
    int b=m*7;
    printf("%d
",a+b);
    }
}