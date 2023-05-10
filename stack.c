#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int Stack[MAX];
int top=-1;

void Push(int );
int Pop();
int Peek();
int main()
{
	int data,choice;
	while(1)
	{
		printf("1.Push 2.Pop 3.Peek 4.exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data to be pushed\n");
				scanf("%d",&data);
				Push(data);
				break;
			case 2: if(top==-1)
					printf("Stack is empty\n");
				else
				{
					printf("data poped is %d\n",Pop());
				}
				break;
			case 3: if(top==-1)
					printf("Stack is empty\n");
				else
				{
					printf("data pointed by top of the stack is %d\n",Peek());
				}
				break;
			case 4: exit(0);
		}
	}
}

void Push(int data)
{
	if(top==MAX-1)
		printf("Stack is Full\n");
	else
	{
		Stack[++top]=data;
	}
}
int Pop()
{
	return Stack[top--];
}
int Peek()
{
	return Stack[top];
}





