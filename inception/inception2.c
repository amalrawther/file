#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}
*top=NULL;
void push(int);
void pop();
void display();
void main()
{
	int c,value;
	do
	{
		printf("menu:\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("push\n");
				printf("Enter the element to be inserted");
				scanf("%d",&value);
				push(value);
				break;
			case 2: pop();
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
void push(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	if(top==NULL)
	{
		newnode->link=NULL;
	}
	else
	{
		newnode->link=top;
	}
	top=newnode;
	printf("Insertion successfully\n");
}
void pop()
{
	if(top==NULL)
	printf("Stack empty\n");
	else
	{
		struct node *temp=top;
		printf("The deleted element is %d\n",temp->data);
		top=temp->link;
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	printf("Stack empty\n");
	else
	{
		struct node *temp=top;
		while(temp->link!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
		printf("%d\n",temp->data);
	}
}




//OUTPUT


menu:
1.push
2.pop
3.display
4.exit
enter your choice1
push
Enter the element to be inserted3
Insertion successfully
menu:
1.push
2.pop
3.display
4.exit
enter your choice1
push
Enter the element to be inserted4
Insertion successfully
menu:
1.push
2.pop
3.display
4.exit
enter your choice1
push
Enter the element to be inserted5
Insertion successfully
menu:
1.push
2.pop
3.display
4.exit
enter your choice3
5
4
3
menu:
1.push
2.pop
3.display
4.exit
enter your choice2
The deleted element is 5
menu:
1.push
2.pop
3.display
4.exit
enter your choice2
The deleted element is 4
menu:
1.push
2.pop
3.display
4.exit
enter your choice2
The deleted element is 3
menu:
1.push
2.pop
3.display
4.exit
enter your choice4

