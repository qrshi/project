#include "group.h"
//规约：除了“在声明中”或者“当一个数组名是sizeof或者&的操作数”之外，
//只要是数组名出线在表达式中，这编译器总是将数组名解释成指向该数组的第一个元素的指针


void u_groupmain(void)
{
 char **pekeyword;
 char *keyword[]={"eagle","cat","and","dog","ball","NULL"};
 char *str;
 int lenth;
 void *pt;
 
 lenth=sizeof(keyword);//值等于整个数组长度6*4
 pt=&keyword;//值与keyword相同
 
	pekeyword=keyword;//指向指针的指针

	while(**pekeyword!=""[0])	//""[0]等价于'\0'
	{
//		printf("%s\n",*(pekeyword++));
		str=*(pekeyword++);
	}
	
}




