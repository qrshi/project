#ifndef	__STACK_H
#define	__STACK_H
#include <stdlib.h>
 #include "structu.h"
 
 #define FALSE 0
 #define TRUE 1
 
 typedef struct _t_stack t_stack;
 typedef size_t stackelement;



t_stack *newStack(void);
void freestack(t_stack *stack);
bool push(t_stack *stack,stackelement value);
bool pop(t_stack *stack,stackelement *pvalue);;
size_t getStackDepth(t_stack *stack);
 bool stackisempty(t_stack *stack);
 bool stackisfull(t_stack *stack);
 bool getstackelement(t_stack *stack,size_t index,stackelement *pvalue);
 
void u_stackmain(void);

#endif
