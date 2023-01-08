#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,j=0,k=0,m=0,s=0;
    for(int i=0;str[i]!=NULL;i++)
    {
     
      if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') || (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'))  
      {
          j++;
      }
      else if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))
      {
          k++;
      }
      else if(str[i]>='0' && str[i]<='9')
      {
          m++;
      }
      else if(str[i]==' ')
      {
          s++;
      }
      
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",j,k,m,s);

    
}