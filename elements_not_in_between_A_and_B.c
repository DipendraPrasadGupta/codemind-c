#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        f++;
    }
    int x,y,c=0;
    scanf("%d%d",&x,&y);
    
    for(int i=0; i<n; i++)
    {
        if(a[i]>=x && a[i]<=y)
        {
           c++; 
        }
        else
        {
          printf("%d ",a[i]);   
        }
    }
   if(n==c)
   {
       printf("-1");
   }
}