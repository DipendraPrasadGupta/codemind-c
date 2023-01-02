#include<stdio.h>
#include<string.h>
int main()
{
    int c=0;
    char n[500];
scanf("%s",n);
for(int i=0; i<strlen(n); i++)
{
    if(n[i]=='1')
    {
        c++;
    }
}
printf("%d",c);

}
