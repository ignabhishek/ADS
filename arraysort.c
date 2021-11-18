#include<stdio.h>
void main()
{
	int ar[50],n,i,j,temp;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nBefore sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d \t",ar[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	printf("\nAfter sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d \t",ar[i]);
	}
	printf("\n");
}
