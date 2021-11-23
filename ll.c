#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node {
   int data;
   int key;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space\n");
                exit(0);
        }
        printf("\nEnter the data value for the node: ");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                ptr=head;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}

void display() {
   struct node *ptr = head;
   printf("\n");

   while(ptr != NULL) {
      printf("%d,%d",ptr->key,ptr->data);
      ptr = ptr->next;
   }
	
   printf(" ]");
}

void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space\n");
                return;
        }
        printf("\nEnter the data value for the node: " );
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                temp->next=head;
                head=temp;
        }
}

void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space\n");
                return;
        }
        printf("\nEnter the data value for the node: " );
        scanf("%d",&temp->data );
        temp->next =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                ptr=head;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}

void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space\n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted: ");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node: ");
        scanf("%d",&temp->data) ;
  
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=head;
                head=temp;
        }
        else
        {
                for(i=0,ptr=head;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}

void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty\n");
                return;
        }
        else
        {
                ptr=head;
                head=head->next ;
                printf("\nThe deleted element is : %d",ptr->data);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("\nList is Empty\n");
                exit(0);
        }
        else if(head->next ==NULL)
        {
                ptr=head;
                head=NULL;
                printf("\nThe deleted element is: %d",ptr->data);
                free(ptr);
        }
        else
        {
                ptr=head;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is: %d",ptr->data);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("\nThe List is Empty\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted: ");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=head;
                        head=head->next ;
                        printf("\nThe deleted element is:%d ",ptr->data  );
                        free(ptr);
                }
                else
                {
                        ptr=head;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found: ");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nThe deleted element is: %d",ptr->data );
                        free(ptr);
                }
        }
}


void main() 
{
int ch;
    do
    {
    printf("\t Main Menu \n1.Create \n2.Display \n3.Insert at the beginning \n4.Insert at the end");
    printf("\n5.Insert at specified position \n6.Delete from beginning \n7.Delete from the end");
    printf("\n8.Delete from specified position \n9.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
      {
        case 1:create();
                break;
        case 2:insert_begin();
                break;
        case 3:insert_end();
                break;
        case 4:insert_pos();
                break;
        case 5:delete_begin();
                break;
        case 6:delete_end();
                break;
        case 7:delete_pos();
                break;
        case 8:display();
                break;
        case 9:exit(0);
                break;
        default:printf("n Wrong Choice");
                break;
      }
    }while(ch!=9);
}
