#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0; j<n; j++)
    {
        sum=sum+a[j];
    }
    printf("%d",sum);
}