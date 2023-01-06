#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int min=99999;
    for(i=2; i<=n; i++)
    {
        
        int b= pow(2,i);
        if(b>n){
            if(min>abs(b-n)){
                min=abs(b-n);
                }
                break;
        }
        if(b<=n){
            if(min>abs(b-n)){
                min=abs(b-n);
                }
        }
    }
     printf("%d",min);
}