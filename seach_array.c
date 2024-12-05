#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,item,found;
	
	printf("Enter How Many Elements You Want..");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter Elements..");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Elements Are..");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	printf("Search Element..");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(item==a[i])
		{
			printf("Element Found At %d Location..",i+1);
			found=1;
			break;
		}
	}
	if(!found)
	{
		printf("Not Found");
	}

	return 0;
}
