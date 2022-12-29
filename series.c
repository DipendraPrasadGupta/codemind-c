#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=1,k2=1,a,b;
    scanf("%d",&n);
    for(int i=1; i<=n+1; i++)
    {
         
        if (i%2!=0)
        {
            b=pow(2,k2)-1;
            printf("%d ",b);
            k2++;
        } 
        else
        {
            a=pow(3,k1)-1;
            printf("%d ",a);
            k1++;
        }
       
    }
}