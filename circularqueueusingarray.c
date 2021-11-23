#include <stdio.h>
#define SIZE 10
int items[SIZE];
int front = -1, rear = -1,choice;

int isfull() 
{
	if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
	{
		return 1;
	}
  	return 0;
}

int isempty() 
{
	if (front == -1)
	{
		return 1;
	}
 	return 0;
}

void enqueue() 
{
	int num;
	printf("\nEnter the element: \n");
	scanf("%d",&num);
	if (isfull())
	{
		printf("\n Queue is full \n");
	}
  	else 
	{
		if (front == -1)
		{
			front = 0;
		}
    		rear = (rear + 1) % SIZE;
    		items[rear] = num;
    		printf("\n Inserted -> %d \n", num);
  	}
}

void dequeue() 
{
	int num;
  	if (isempty()) 
	{
    	printf("\n Queue is empty \n");
  	} 
  	else 
	{
    		num = items[front];
    		if (front == rear) 
		{
      			front = -1;
      			rear = -1;
    		}
    		else 
		{
      			front = (front + 1) % SIZE;
    		}
    		printf("\n Deleted element -> %d \n", num);
  	}
}

void display() 
{
	int i;
  	if (isempty())
	{
    		printf(" \n Queue is empty\n");
	}
  	else 
	{
    		printf("\n Front -> %d ", front);
    		printf("\n Items -> ");
    		for (i = front; i != rear; i = (i + 1) % SIZE) 
		{
     	 		printf("%d\t", items[i]);
   		}
		printf("%d", items[i]);
    		printf("\n Rear -> %d \n", rear);
  	}
}

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
