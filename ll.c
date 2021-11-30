#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *create(struct node *);
struct node *display(struct node *);

int main()
{
	int option;
	do
	{
		printf("\n1.Create a list \n2.Display \n3.Exit \n");
		printf("Enter your option: ");
		scanf("%d",&option);
		printf("\n");
		switch(option)
		{
			case 1: {
					start=create(start);
					printf("\n\nLinked List Created");
					break;
				}
			case 2: {
					start=display(start);
					printf("\n");
					break;
				}
			default: {
					printf("\n\nExiting");
					break;
				 }
		}
	}while(option!=3);
}

struct node *create(struct node *start)
{	
	struct node *newnode,*ptr;
	int num;
	printf("\nEnter -1 to end ");
	printf("\nENter the data: ");
	scanf("%d",&num);
	while(num!=-1)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=num;
		if(start==NULL)
		{
			newnode->next=NULL;
			start=newnode;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=newnode;
			newnode->next=NULL;
		}
		printf("\nEnter the data: ");
		scanf("%d",&num);
	}
	return start;
}

struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
	return start;
}

