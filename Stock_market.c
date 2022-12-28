#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        printf("LOSS
");
    }
    else if(n==m)
    {
        printf("NEUTRAL
");
    }
    else if(n<m)
    {
        printf("PROFIT
");
    }
    }
}