#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1,choice;
void enqueue();
void dequeue();
void display();

void main()
{
	while(choice!=4)
	{
		printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					enqueue();
					break;
				}
			case 2:
				{
					dequeue();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
					printf("Exiting the stack\n");
					break;
				}
			default:
				{
					printf("\nEnter a valid choice\n");
				}
		}
	}
}

void enqueue()
{
	int num;
	printf("\nEnter the number to be inserted: ");
	scanf("%d",&num);
	if(rear==MAX-1)
	{
		printf("\nQueue Overflow\n");
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=num;
	}
	else
	{
		rear++;
		queue[rear]=num;
	}
}

void dequeue()
{
	int num;
	if(front==-1||front>rear)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		num=queue[front];
		front++;
		if(front>rear)
		{
			front=rear=-1;
		}
		printf("Dequeued element is: %d",num);
	}
}

void display()
{
	int i;
	if(front==-1||front>rear)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\t%d",queue[i]);
		}
	}
}

	
