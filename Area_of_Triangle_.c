#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s,aot;
    s= (a+b+c)/2;
    aot=sqrt(s*((s-a)*(s-b)*(s-c)));
    printf("%.2f",aot);
}