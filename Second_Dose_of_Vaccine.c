#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
    int d,l,r;
    scanf("%d%d%d",&d,&l,&r);
    if(d>=l && d<=r)
    {
        printf("Take second dose now
");
    }
    else if(d>=l && d>=r)
    {
        printf("Too Late
");
    }
    else if(d<=l && d<=r)
    {
        printf("Too Early
");
    }
    
    }
}