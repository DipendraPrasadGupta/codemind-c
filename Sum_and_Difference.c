#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    int w=a+b;
    int x=a-b;
    float y=c+d;
    float z=c-d;
    printf("%d %d
",w,x);
    printf("%.1f %.1f",y,z);
}