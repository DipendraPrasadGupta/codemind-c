#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j,d=0;
    scanf("%d%d",&a,&b);
    if(a==1)
    {
        a++;
    }
    for(i=a; i<=b; i++)
    {
        int c=0;
        for(j=1; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            d++;
        }
    }
    printf("%d",d);
}