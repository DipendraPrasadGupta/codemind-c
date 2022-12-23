#include<stdio.h>

int main()
{
	int i,j,n,k,l=1;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=n-1; j>=i; j--)
		{
			printf(" ");
		}
		
		for(k=1; k<=l; k++)
		{ 
			printf("%d",i);
		}            
			l = l+2;    
	    printf("
");
	}
}