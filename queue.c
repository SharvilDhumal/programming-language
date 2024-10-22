//queue using array in c

#include<stdio.h>
#include<stdlib.h>
# define maxsize 5
int queue[maxsize];
int rear=-1;
int front=-1;

void insertq()
{
    int x;
    printf("\nEnter the value:\n");
    scanf("%d",&x);
    if(rear==maxsize-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        if((front==-1)&&(rear==-1))
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=x;
    }
}

void deleteq()
{
    int temp;
    if((front==-1)&&(rear==-1))
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp=queue[front];
        printf("\n%d is deleted from queue\n",temp);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=front+1;
        }
    }
}
void display()
{
    int i;
    if((front==-1)&&(rear==-1))
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\n");
            printf("\n%d\t",queue[i]);
        }
    }
}
int main()
{
    int choice;
    do
    {   printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Display");
        printf("\n4.Exit"); 
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
      
       
       
        switch(choice)
        {
            case 1:insertq();
            break;
           
            case 2:deleteq();
            break;
           
            case 3:display();
            break;
           
            case 4:exit;
            break;
        }
    }while(choice!=4);
    return 0;
}
