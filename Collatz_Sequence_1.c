#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    printf("%d ",n);
    while(n!=0)
    {
        if(n%2==0)
        {
            a=n/2;
            printf("%d ",a);
        }
        else if(n%2!=0 && n!=1)
        {
            a=3*n+1;
            printf("%d ",a);
        }
        else if(n==1)
        {
            break;
        }
        n=a;
    }
}