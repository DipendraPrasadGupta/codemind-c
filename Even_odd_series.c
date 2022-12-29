#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=1,k2=0,a,b;
    scanf("%d",&n);
    for(int j=1; j<=n+1; j++)
    {
        if(j%2!=0)
        {
          a=pow(2,k1);
          printf("%d ",a);
          k1++;
        }
        else if(j==2)
        {
         printf("0 ");
        }
        else 
        {
          b=pow(3,k2);
          printf("%d ",b);
          k2++;
        }
    }
        
}