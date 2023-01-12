#include<stdio.h>
#include<math.h>
int main()
{
    float h,m;
    float a,b,h1,m1,angle;
    scanf("%f:%f",&h,&m);
    a=360/12;
    b=a/60;
    h1=h*a+m*b;
    m1=m*6;
    angle=abs(h1-m1);
    if(angle>180)
    {
        angle=360-angle;
    }
    printf("%.1f",angle);
}