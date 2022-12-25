#include<stdio.h>
int main()
{
    int n,l=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem>l)
        {
            l=rem;
        }
        n=n/10;
    }
    printf("%d",l);
}