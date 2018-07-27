#include "stack.h"
#include "structu.h"
#include <stdlib.h>

#define MAXSIZE 20

//���ؽṹ��ʵ�ֵķ���ֻ����������ָ����ʵ�Ӧ�ã���Ҫ�ṩ�ӿں���ʵ�ֽṹ��ʵ��
//����newStack����
struct _t_stack
{
	char elements[MAXSIZE];
	int *data;
	size_t top;
	size_t numdata;
};

t_stack *newStack(void)
{
	t_stack *stack;
	stack=(t_stack *)malloc(sizeof(t_stack));
	stack->data=(int *)malloc(MAXSIZE*sizeof(int));
	stack->top=0;
	stack->numdata=MAXSIZE;
	return stack;
}

void freestack(t_stack *stack)
{
	free(stack->data);
	free(stack);
}

bool push(t_stack *stack,stackelement value)
{
	if(stackisfull(stack)) return FALSE;
	stack->data[(stack->top)++]=value;
	return TRUE;
 
}

bool pop(t_stack *stack,stackelement *pvalue)
{
	if(stackisempty(stack)) return FALSE;
	*pvalue=stack->data[--(stack->top)];
	
	return TRUE;
}

size_t getStackDepth(t_stack *stack)
{
	return (stack->top);
}

bool stackisempty(t_stack *stack)
{
	return (stack->top==0);
}

bool stackisfull(t_stack *stack)
{
	return (stack->top==stack->numdata);
}

bool getstackelement(t_stack *stack,size_t index,stackelement *pvalue)
{
	if(index>stack->top) return FALSE;
	
	*pvalue = stack->data[index-1];
	
	return TRUE;
}
//OCP  ����ԭ�򣬶���չ���ţ����޸Ĺر�
void u_stackmain(void)
{
	t_stack *stack;
	stackelement lenth;
	t_range range=newvalidator(0,9);	
	t_oddeven oddeven=newoddevenvalidator(ODD);
	
	stack=newStack();
	
	for(int i=0;i<16;i++) push(stack,i);
	
	lenth=getStackDepth(stack);
	getstackelement(stack,5,&lenth);
	
	while(!stackisempty(stack))
	{
		pop(stack,&lenth);
	}
	
	
	freestack(stack);
}



