#include<stdio.h>

int main()

{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=k;j++)
		{
			printf("*",j);
		}
		
		for(j=i;j>=1;j--)
		{
			printf("*",j);
		}
		printf("\n");
	}
}