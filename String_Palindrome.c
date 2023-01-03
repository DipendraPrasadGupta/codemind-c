#include<stdio.h>
#include<string.h>
int main()
{
 char n[100];
  scanf("%s",n);
  int flag=0,i;
 int len=strlen(n);
 for(i=0; i<len/2; i++)
 {
 	if(n[i]!=n[len-i-1])
 {
 	flag=1;
 	break;
 }
}
if(flag==0)
 {
 	printf("Palindrome");
 }
 else
 {
 	printf("Not Palindrome");
 }
  
}