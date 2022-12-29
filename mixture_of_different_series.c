#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=0,k2=0,a,b;
    scanf("%d",&n);
    for(int i=1; i<=n+1; i++)
    {
         
        if (i%2!=0)
        {
            a=pow(2,k1);
            printf("%d ",a-1);
            k1++;
        } 
        else
        {
            b=pow(3,k2);
            printf("%d ",b-1);
            k2++;
        }
       
    }
}