#include<stdio.h>
int main()
{
    int n,i,sum=0,sum1=0,a,j;
    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
        a=i*i;
       sum=sum+a;
    }
    for(j=1; j<=n; j++)
  {
      sum1=sum1+j;
  }
    int b=sum1*sum1;
    int c=b-sum;
    printf("%d ",c);
}