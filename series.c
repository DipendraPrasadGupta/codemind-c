#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=0,k2=0,m=0;
    scanf("%d",&n);
    printf("%d ",m);
    for(int i=0; i<n-1; i++)
    {
        if(i%2==0)
        {
          int a=pow(3,k1);
          printf("%d ",a);
          k1++;
        }
        else
        {
          int b=pow(2,k2);
          printf("%d ",b);
          k2++;
        }
    }
}