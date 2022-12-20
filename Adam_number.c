#include<stdio.h>
int main()
{
    int n,rem1,rem2,rev1=0,rev2=0;
    scanf("%d",&n);
    int temp=n;
    int b=n*n;
    while(temp!=0)
    {
        rem1=temp%10;
        rev1=rev1*10+rem1;
        temp=temp/10;
    }
     
     int c=rev1*rev1;
     while(c!=0)
     {
         rem2=c%10;
         rev2=rev2*10+rem2;
         c=c/10;
     }
     
     if(b==rev2)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
}