#include "structu.h"

//�ṹ���Ա������ϵ�� ����ʵ�ʳ��� �н�С�ߵ�������
//�ṹ�屾������ϵͳ ������ݳ�Ա���� �н�Сֵ��������
//����ϵ�������ֳ�
//���ȵ���˳����ṹ�壬�����˷�
//�������Ĳ����ﵽ2,3����3������Ӧ�ý�������װ�ɽṹ��



t_range range=newvalidator(0,9);	
t_oddeven oddeven=newoddevenvalidator(ODD);
//�ϲ�
bool  validaterange(void *pdata,int value)
{
	t_range *rangevalidator=(t_range *)pdata;
	
	return rangevalidator->min<=value&&value<=rangevalidator->max;
}
//�ϲ�
bool validateoddeven(void *pdata,int value)
{
	bool ret;
	t_oddeven *oddeven=(t_oddeven *)pdata;
	ret=(!oddeven->iseven&&(value%2));
	ret=(oddeven->iseven&&!(value%2));
	return ret;
}
//�²�
bool rangecheck(void *pthis,int value)
{
		PF_validator validate=*((PF_validator *)pthis);
	
	return validate(pthis,value);
}	

//�ϲ�
void u_structmain(void)
{
	int ret; 
 
	ret=rangecheck(&range,10);
	ret=rangecheck(&oddeven,10);
 
}



