#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        printf("YES");
    }
    else if(n>m || n==m)
    {
        printf("NO");
    }
}