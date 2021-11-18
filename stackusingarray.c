#include<stdio.h>
int stack[100],i,j,choice,n,top=-1;
void push();
void pop();
void peek();
void display();

void main()
{
	printf("Enter the limit of stack: ");
	scanf("%d",&n);
	printf("\n");
	while(choice!=5)
	{
		printf("\n1.Push \n2.Pop \n3.Peek \n4.Display \n5.Exit \n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					peek();
					break;
				}
			case 4:
				{
					display();
					break;
				}
			case 5:
				{
					printf("\nExiting the stack\n");
					break;
				}
			default:
				{
					printf("\nEnter a valid choice\n");
				}
		}
	}
}

void push()
{
	int val;
	if(top == n)
	{
		printf("\nOverflow \n");
	}
	else
	{
		printf("\nEnter the value: ");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
		printf("\nValue Pushed \n");
	}
}

void pop()
{
	if(top == -1)
	{
		printf("\nUnderflow \n");
	}
	else
	{
		printf("\nPoped element is %d \n",stack[top]);
		top=top-1;
	}
}

void peek()
{
	if(top == -1)
	{
		printf("\nStack is empty ");
	}
	else
	{
		printf("\nTop of stack is %d \n",stack[top]);
	} 
}

void display()
{
	if(top == -1)
	{
		printf("\n Stack is empty \n");
	}
	else
	{
		printf("\nElements of stack is:\n");
		for(i=top;i>=0;i--)
		{
			printf("%d \n",stack[i]);
		}
	}
}

			
