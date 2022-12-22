#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        int n;
        int m;
        float b;
        scanf("%d",&n);
          b=sqrt((double)n);
          m=b;
      if(m==b)
      {
          printf("True
");
      }
      else
      {
          printf("False
");
      }
    }
}