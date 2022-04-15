#include<stdio.h>
#define SIZE 20
int array[SIZE];
int top1=-1;
int top2=SIZE;
void push1(int data)
{
	if(top1<top2-1)
	{
		top1++;
		array[top1]=data;
	}
	else
	{
		printf("stack overflow\n");
	}
}
void push2(int data)
{
	if(top1<top2-1)
	{
	
	top2--;
	array[top2]=data;
}
else
{
	printf("Stack is full\n");
}
}
void pop1 ()
{
	if(top1>=0)
	{
		int pop_ele=array[top1];
		top1--;
		printf("THE poped element is %d\n",pop_ele);
	}
	else
	{
		printf("stack is empty");
	}
}
void pop2()
{
	if(top2<SIZE)
	{
		int pop_ele=array[top2];
		top2--;
		printf("%d is being poped from stack",pop_ele);
	}
	else
	{
		printf("Stack is empty\n");
	}
}
void display_stack1()
{
	int i;
	for(i=top1;i>=0;--i);
	{
		printf("%d",array[i]);
	}
	printf("\n");
}
void display_stack2()
{
	int i;
	for(i=top2;i<SIZE;++i)
	{
		printf("%d",array[i]);
	}
	printf("\n");
}
int main()
{
	int ar[SIZE];
	int i;
	int num_of_ele;
	printf("We can push a total 20 value\n");
	for(i=1;i<=10;++i)
	{
		push1(i);
		printf("value pushed in the stack %d \n",i);
		
	}
	for(i=11;i<=20;++i)
	{
		push2(i);
		printf("Value pushed in the stack 2 is %d \n",i);
	}
	display_stack1();
	display_stack2();
	printf("pushing value of stack 1 is %d \n",11);
	push1(11);
	num_of_ele=top1+1;
	while(num_of_ele)
	{
		pop1();
		--num_of_ele;
	}
	pop1();
	return 0;
}

