#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,rem1,sum=0,c=0;
    scanf("%d",&n);
    int num=n;
    while(num!=0)
    {
      rem1=num%10;
       c++;
       num=num/10;
    }
    num=n;
    while(num!=0)
    {
        rem=num%10;
         sum=sum+pow(rem,c);
        num=num/10;
        c--;
    }
 
  if(sum==n)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }
      
}