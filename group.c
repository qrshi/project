#include "group.h"
//��Լ�����ˡ��������С����ߡ���һ����������sizeof����&�Ĳ�������֮�⣬
//ֻҪ�������������ڱ��ʽ�У�����������ǽ����������ͳ�ָ�������ĵ�һ��Ԫ�ص�ָ��


void u_groupmain(void)
{
 char **pekeyword;
 char *keyword[]={"eagle","cat","and","dog","ball","NULL"};
 char *str;
 int lenth;
 void *pt;
 
 lenth=sizeof(keyword);//ֵ�����������鳤��6*4
 pt=&keyword;//ֵ��keyword��ͬ
 
	pekeyword=keyword;//ָ��ָ���ָ��

	while(**pekeyword!=""[0])	//""[0]�ȼ���'\0'
	{
//		printf("%s\n",*(pekeyword++));
		str=*(pekeyword++);
	}
	
}




