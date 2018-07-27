#ifndef	__ARRAY_H
#define	__ARRAY_H
#include "structu.h"
 
typedef struct _t_intarray t_IntArray;
t_IntArray * IA_ini();
void IA_cleanup(t_IntArray *pthis);
void IA_setSize(t_IntArray *pthis,size_t size);
size_t IA_getSize(t_IntArray *pthis);
bool IA_setElem(t_IntArray *pthis,size_t index,int value);
bool IA_getElem(t_IntArray *pthis,size_t index,int *pvalue);
 
 

void u_arraymain(void);

#endif
