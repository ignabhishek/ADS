#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *create(struct node *);
struct node *insert(struct node *);
struct node *display(struct node *);

int main()
{
	int option;
	do
	{
		printf("\n1.Create a list \n2.Insertion \n3.Display \n4.Exit \n");
		printf("Enter your option: ");
		scanf("%d",&option);
		printf("\n");
		switch(option)
		{
			case 1: {
					start=create(start);
					printf("\nLinked List Created\n");
					break;
				}
			case 2: {
					start=insert(start);
					break;
				}
			case 3: {
					start=display(start);
					printf("\n");
					break;
				}
			case 4: {
					printf("Exiting\n");
					break;
				}
			default: {
					printf("\nInvalid choice\n");
					break;
				 }
		}
	}while(option!=4);
}


struct node *insert(struct node *start)
{
	struct node *newnode,*ptr,*preptr,*temp;
	int num,ch;
	if(start==NULL)
	{
		printf("\nPlease Create a list\n");
	}
	else
	{
		printf("Enter the data:");
		scanf("%d",&num);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=num;
		printf("\n1.Insert at the Beginning \n2.Insert at End \n3.Insert at the Middle\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1: {
					newnode->next=start;
					start=newnode;
					printf("\nInserted at the Beginning\n");
					break;
				}
			case 2: {	
					ptr=start;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=newnode;
					newnode->next=NULL;
					printf("\nInserted at the End\n");
					break;
				}
			case 3: {
					printf("\nInserted at the Middle\n");
					break;
				}
			default: {
				 	printf("\nInvalid choice\n");
					break;
				 }
		
		
		}
	}
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


