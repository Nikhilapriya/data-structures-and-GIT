#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];

void push(char);
void pop();
void find_top();

void main()
{
	int i;
	char a[100];
	printf("enter expression : \n");
	scanf("%s", &a);
	for (i = 0; a[i] != '\0';i++)
	{
		if ((a[i] == '(') | (a[i] == '[') | (a[i] == '{'))
		{
			push(a[i]);
		}
		else if ((a[i] == ')') | (a[i] == ']') | (a[i] == '}'))
		{
			pop();
		}
	}
	find_top();
}

void push(char a)      // to push elements in stack
{
	stack[top] = a;
	top++;
}

void pop()        // to pop elements from stack
{
	if (top == -1)
	{
		printf("expression is invalid\n");
		exit(0);
	}
	else{
		top--;}
}

void find_top()       // to find top element of stack
{
	if (top == -1)
		printf("\nexpression is valid\n");
	else
		printf("\nexpression is invalid\n");
}