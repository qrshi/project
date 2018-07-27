
#include <string.h>
#include "bubble.h"

//下层模块
typedef int (*COMPARE)(const void*e1,const void*e2);
//下层模块
void byte_swap(void *pdata1,void *pdata2,size_t sizeu)
{
	 unsigned char *pcdata1=pdata1;
 unsigned char *pcdata2=pdata2;
 unsigned char uctemp;
	
	while(sizeu--)
	{
		uctemp=*pcdata1;*pcdata1=*pcdata2;*pcdata2=uctemp;
		pcdata1++;pcdata2++;
	}
}

//下层模块
void bubblesort(void *base,size_t nmemb,size_t sizeu,COMPARE compare)
{
 int i=0,j=0;
 int hasswap=1;
	void *pthis=NULL;
	void *pnext=NULL;
	int lenth;
	
	lenth=nmemb-1;
	for(i=1;hasswap&&i<nmemb;i++,lenth--)
	{
		hasswap=0;
		
		for(j=0;j<lenth;j++)
		{
			pthis=((unsigned char*)base)+sizeu*j;
			pnext=((unsigned char*)base)+sizeu*(j+1);
		
			if(compare(pthis,pnext)>0)
			{
				hasswap=1;
				byte_swap(pthis,pnext,sizeu);
				
			}
		
		}
 
	}
}

//上层模块
int compare_int(const void *e1,const void *e2)
{
	return (*((int*)e1)-*((int*)e2));//升序
}
//上层模块
int compare_int_invert(const void*e1,const void*e2)
{
	return (*((int*)e2)-*((int*)e1));//降序
}
//上层模块
int compare_vstrcmp(const void*e1,const void*e2)
{
	return strcmp(*((char **)e1),*((char **)e2));//字符串比较
}
//上层模块
void u_bubblemain(void)
{
	int testg[]={10,5,6,1,7,2,11};
	char *testc[]={"sunday","monday","tuesday","wednesday","thursday"};
	
	bubblesort(testg,sizeof(testg)/sizeof(testg[0]),sizeof(testg[0]),compare_int);
	
	bubblesort(testc,sizeof(testc)/sizeof(testc[0]),sizeof(testc[0]),compare_vstrcmp);
}





