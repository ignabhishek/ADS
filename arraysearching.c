#include<stdio.h>
void main()
{
	int ar[50],n,i,num,flag=0,pos;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(ar[i] == num)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag!=0)
	{
		printf("Element found in location %d \n",pos);
	}
	else
	{
		printf("Element not found \n");
	}
}
