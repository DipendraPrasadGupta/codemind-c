#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,rem1,rev=0,c=0;
    scanf("%d",&n);
    int temp=n;
    int a=n*n;
    while(temp!=0)
    {
     rem=temp%10;
     c++;
     temp=temp/10;
    }
    
    int b=pow(10,c);
    
    rem1=a%b;
        a=a/b;
    
    if(n==rem1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    
}