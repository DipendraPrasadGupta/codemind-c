#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int x[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    int max=x[0];
    for(i=0; i<n; i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }
    }
    
    for(j=max; ; j++)
    {
        int c=0;
        for(i=0; i<n; i++)
        {
        if(j%x[i]==0)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("%d",j);
        break;
    }
    
    }

}