#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    while(a!=0)
    {
        int n,m,i,rem;
        scanf("%d%d",&n,&m);
        for(i=n; i<=m; i++)
        {
            rem=i%10;
            if(rem==2 ||rem==3 || rem==9){
                c++;
            }
        }
        printf("%d
",c);
        c=0;
        a--;
    }

}
