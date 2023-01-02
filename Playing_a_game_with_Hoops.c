#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int m;
        scanf("%d",&m);
        if(m%2==0)
        {
            printf("%d
",m/2);
        }
        else
        {
            printf("%d
",m/2+1);
        }
    }
}