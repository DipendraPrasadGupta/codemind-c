#include<stdio.h>
int numdiv(int );
int main()
{
    int n;
    scanf("%d",&n);
       int c=0,i;
    for(i=1; i<=n; i++)
    {
        if(numdiv(i)==9)
        {
        printf("%d ",i);
            c++;
        }
    }
   printf("
Total=%d",c);
}
int numdiv(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
