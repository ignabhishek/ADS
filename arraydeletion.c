#include<stdio.h>
void main()
{
	int ar[50],n,i,pos;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the position where we want to delete: ");
	scanf("%d",&pos);	
	if(pos >= n)
	{
		printf("Deletion not possible \n");
	}
	else
	{
		for(i=pos-1; i<n-1; i++)
		{
			ar[i] = ar[i+1];
		}
		n = n - 1;
	}
	printf("Elements are:\t");
	
	for(i=0;i<n;i++)
	{
		printf("%d \t",ar[i]);
	}
	printf("\n");	
}
