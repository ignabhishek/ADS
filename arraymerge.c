#include<stdio.h>
void main()
{
	int ar[50],br[50],merge[100],n,m,i,k;
	printf("Enter limit of first array: ");
	scanf("%d",&n);
	printf("Enter the first array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		merge[i]=ar[i];
	}
	k=i;
	printf("Enter limit of second array: ");
	scanf("%d",&m);
	printf("Enter the second array elements: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&br[i]);
		merge[k]=br[i];
		k++;
	}
	printf("Merged array:\t");
	for(i=0;i<k;i++)
	{
		printf("%d \t",merge[i]);
	}
	printf("\n");
}
