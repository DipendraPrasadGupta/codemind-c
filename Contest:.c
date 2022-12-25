#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b+c*2>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}