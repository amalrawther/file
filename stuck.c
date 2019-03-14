#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
int top=-1,stack[20];
void main()
{
	int choice=0,i,n;
	printf("Enter the size of the stack\t");
	scanf("%d",&n);
	do
	{
	printf("\nMENU\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter the choice\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push(n);
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
		}
	}while(1);
}
void push(int n)
{
	if(top==n-1)
		printf("stack overflow\ninsertion not possible");
	else
	{
		int x;
		printf("Enter the element to be pushed\t");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		printf("The deleted element is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top==-1)
		printf("Stack is empty\n");
	else
	{
		printf("\n");
		for(int i=top;i!=-1;i--)
			printf("\t%d\n",stack[i]);
	}
}

