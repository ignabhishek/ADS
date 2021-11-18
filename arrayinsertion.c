#include<stdio.h>
void main()
{
	int ar[50],n,i,pos,num;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the position where we want to insert ");
	scanf("%d",&pos);
	printf("Enter the value to insert: ");
	scanf("%d",&num);	
	for(i=n-1; i>=pos-1; i--)
	{
		ar[i+1] = ar[i];
	}
	ar[pos-1] = num;
	printf("Elements are:\t");
	for(i=0;i<n+1;i++)
	{
		printf("%d \t",ar[i]);
	}
	printf("\n");	
}
