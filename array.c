#include <stdlib.h>
#include "array.h"
#include "structu.h"

//隔离结构体实现，头文件只声明，可定义指针调用，具体实现隐藏至C文件
struct _t_intarray
{
	int *pbuffer;
	size_t count;
};

t_IntArray * IA_ini()
{
 t_IntArray * pintarray=malloc(sizeof(t_IntArray));
	
	pintarray->pbuffer=0;
	pintarray->count=0;
	 
	return pintarray;
}

void IA_cleanup(t_IntArray *pthis)
{
	free(pthis->pbuffer);
	pthis->count=0;
	free(pthis);
}

void IA_setSize(t_IntArray *pthis,size_t size)
{
 pthis->count=size;
	pthis->pbuffer=(int*)realloc(pthis->pbuffer,size*sizeof(int));
	
}

size_t IA_getSize(t_IntArray *pthis)
{
	return pthis->count;
}

bool IA_setElem(t_IntArray *pthis,size_t index,int value)
{
	if(index>=pthis->count)return 0;
	pthis->pbuffer[index]=value;
	
	return 1;
}

bool IA_getElem(t_IntArray *pthis,size_t index,int *pvalue)
{
	if(index>=pthis->count)return 0;
	*pvalue=pthis->pbuffer[index];
	return 1;
}


void u_arraymain(void)
{
	size_t count =10;
	size_t temp;
	
	t_IntArray *pintarray;
	pintarray=IA_ini();
	IA_setSize(pintarray,count);
	
	for(size_t i=0;i<count;i++)
	{
		IA_setElem(pintarray,i,(int)i*2);
	}
	
	for(size_t i=0;i<count;i++)
	{
		IA_getElem(pintarray,i,&temp);
	}
		
	
	IA_cleanup(pintarray);
}




