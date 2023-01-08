#include<stdio.h>
int main()
{
    char str[100],c=1;
    scanf("%[^
]s",str);
    for(int i=1; str[i]!=NULL; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            c++;
        }
    }
    printf("%d",c);
}