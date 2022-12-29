#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=-2,k2=0,b,x;
    scanf("%d",&n);
    for(int i=1; i<=n+1; i++)
    {
         
        if (i%2==0)
        {
            printf("%d ",k1);
            x=5*k1+12;
            k1=x;
        } 
        else
        {
             b=pow(3,k2);
            printf("%d ",b+2);
            k2++;
        }
       
    }
}