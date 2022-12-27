#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(a!=0 && b!=0)
    {
     if(a>b)
     {
         a%=b;
     }
     else if(b>a)
     {
         b%=a;
     }
    }
    int hcf= a ==0 ? b:a;
    printf("%d",hcf);
}