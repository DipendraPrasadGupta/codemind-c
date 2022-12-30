#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    int temp=n;
    int a=n%10;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    
    int b=pow(10,c-1);
    int d=a*b;
    int x=temp/b;
    int e=temp-((temp/b)*b);
    int f=(d+e)-a;
    printf("%d",f+x);
    
}