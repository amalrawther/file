#include<stdio.h>
#include<stdlib.h>
void enq(int);
void deq();
void display();
int rear=-1,front=-1,a[10];
void main()
{
	int max,c;
	printf("Enter the size of the queue\n");
	scanf("%d",&max);
	do
	{
		printf("MENU\n");
		printf("1.enq\t2.deq\t3.display\t4.exit\n");
		("Enter your choice\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: enq(max);
				break;
			case 2: deq();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default: printf("Wrong choice\n");
		}
	}
	while(c<=4);
}
void enq(int max)
{
	int item;
	if(rear==max-1)
	printf("Overflow\n");
	else
	{
		printf("Enter the element to be inserted:\n");
		scanf("%d",&item);
		if(front==-1&&rear==-1)
		{
			front=0;
			rear=-1;
		}
		rear=rear+1;
		a[rear]=item;
	}
}
void deq()
{
	if(front==-1||front>rear)
	printf("Underflow\n");
	else
	{
		printf("Deleted element is %d\n",a[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1||front>rear)
	printf("Queue empty\n");
	else
	{
		for(i=front;i<=rear;i++)
		printf("%d\t",a[i]);
	}
}




\\output
Enter the size of the queue
3
MENU
1.enq	2.deq	3.display	4.exit
1
Enter the element to be inserted:
25
MENU
1.enq	2.deq	3.display	4.exit
1
Enter the element to be inserted:
26 
MENU
1.enq	2.deq	3.display	4.exit
1
Enter the element to be inserted:
27
MENU
1.enq	2.deq	3.display	4.exit
1
Overflow
MENU
1.enq	2.deq	3.display	4.exit
3
25	26	27	MENU
1.enq	2.deq	3.display	4.exit
2
Deleted element is 25
MENU
1.enq	2.deq	3.display	4.exit
3
26	27	MENU
1.enq	2.deq	3.display	4.exit
2
Deleted element is 26
MENU
1.enq	2.deq	3.display	4.exit
2
Deleted element is 27
MENU
1.enq	2.deq	3.display	4.exit
2
Underflow
MENU
1.enq	2.deq	3.display	4.exit
4
