#include<stdio.h>
#include<conio.h>

int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	
	printf("A..");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("\t%d",&a[i][j]);
		}
	}
	
	printf("B..");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("\t%d",&b[i][j]);
		}
	}
	
	printf("SUM OF A & B..\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
