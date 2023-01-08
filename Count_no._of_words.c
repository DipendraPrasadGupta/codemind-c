#include<stdio.h>
int main()
{
    char str[100],c=1;
    scanf("%[^
]s",str);
    for(int i=0; str[i]!=NULL; i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}