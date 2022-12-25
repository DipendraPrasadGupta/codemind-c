#include<stdio.h>
int main()
{
    int n,c=0,ec=0,oc=0,rem,rem1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        c++;
        if(rem%2==0)
        {
            ec++;
        }
         else if(rem%2!=0)
        {
            oc++;
        }
        n=n/10;
    }
    
    if(c==ec)
    {
        printf("Even");
    }
    else if(c==oc)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}