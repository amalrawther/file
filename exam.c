//14404018
// intermediate code generator

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char stack[50],post[50];
int top=-1,flag=0;
void push(char a)
{
	top++;
	stack[top]=a;

}

char pop()
{	
	char ch;
	ch=stack[top];
	top--;
	return ch;
}

int prio(char a)
{
	switch(a)
	{
		case '^' : return 5;
			   break;
		case '/' : return 4;
				break;
		case '*' : return 4;
				break;
		case '+' : return 3;
				break;
		case '-' : return 3;
				break;
		default : return 1;
				break;
	}
}

char isop(char ch)
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
			
		flag=1;
		return flag;
	}
        else 
	return 0;
}

void main()
{
	char c[50];
	char val1,val2;
	int i,len,p=0,j=0;

	printf("enter the expression :");
	scanf("%s",c);
	len=strlen(c);
	for(i=0;i<len;i++)
	{
		if(c[i]=='(')
		{
			i=i+1;
			for(;i<len;i++)
			{
				if(c[i]==')')
				{
					break;
				}
			}
		
			printf("\nthe entered expression is not valid");
			break;
		}

		if(isop(c[i])!=0)
		{
			post[p]=c[i];
			p++;	
		}
		else
		{
			if(top<0)
			{
				push(c[i]);		
			}	
			else 
			{	
				if(prio(stack[top])>=prio(c[i]))
				{
				post[p]=pop();
				p++;
				push(c[i]);
				}
				else
				push(c[i]);
			}
		}
	}

	while(top>=0)
	{
		post[p]=pop();
		p++;
	}
	post[p]='\0';
	printf("\n\n postfix expression:\n");
	puts(post);
	printf("\n\n intermediate code :\n");
	
	for(i=0;i<p;i++)
	{
		if(isop(post[i]))
		{
			push(post[i]);	
		}
		else
		{
			val2=pop();//t
			val1=pop();//a
			if(val1=='T'&&val2!='T')
			{
				printf("T%d=T%d%c%c\n",j,val2,post[i],val1);
			}
			else if(val1!='T'&&val2=='T')
			{
				printf("T%d=%c%cT%d\n",j,val1,post[i],j-1);
			}
			else if(val1=='T'&&val2=='T')
			{
				printf("T%d=T%d%cT%d\n",j,j-1,post[i],j-2);
			}
			else
			{
				printf("T%d=%c%c%c\n",j,val1,post[i],val2);
				push('T');
				j++;
			}

		}


	}

}









