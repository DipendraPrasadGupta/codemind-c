#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int ip=l*b;
    int op=((2*w+l)*(2*w+b));
    int cof=c*(op-ip);
    printf("%d",cof);
}