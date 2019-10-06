#include<stdio.h>
#define MAX_STACK_SIZE 100

//size가 100인 배열 선언
int stack[MAX_STACK_SIZE];
int top = -1;

int IsEmpty()
{
	if (top < 0)
		return true;
	else
		return false;
}

int IsFull()
{
	if (top > MAX_STACK_SIZE)
		return true;
	else
		return false;
}

void push(int value)
{
	if (IsFull() == true)
		printf("스택이 가득찼습니다.");
	else
		stack[++top] = value;
}
int pop()
{
	if (IsEmpty() == true)
	{
		return false;
	}
	else
		return stack[top--];
}
int main()
{
	push(3);
	push(5);

	printf("%d ", pop());
	printf("%d ", pop());

	return 0;
}