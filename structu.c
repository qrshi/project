#include "structu.h"

//结构体成员：对齐系数 变量实际长度 中较小者的整数倍
//结构体本身：对齐系统 最大数据成员长度 中较小值的整数倍
//对齐系数等于字长
//长度递增顺序定义结构体，减少浪费
//当函数的参数达到2,3或者3个以上应该将参数封装成结构体



t_range range=newvalidator(0,9);	
t_oddeven oddeven=newoddevenvalidator(ODD);
//上层
bool  validaterange(void *pdata,int value)
{
	t_range *rangevalidator=(t_range *)pdata;
	
	return rangevalidator->min<=value&&value<=rangevalidator->max;
}
//上层
bool validateoddeven(void *pdata,int value)
{
	bool ret;
	t_oddeven *oddeven=(t_oddeven *)pdata;
	ret=(!oddeven->iseven&&(value%2));
	ret=(oddeven->iseven&&!(value%2));
	return ret;
}
//下层
bool rangecheck(void *pthis,int value)
{
		PF_validator validate=*((PF_validator *)pthis);
	
	return validate(pthis,value);
}	

//上层
void u_structmain(void)
{
	int ret; 
 
	ret=rangecheck(&range,10);
	ret=rangecheck(&oddeven,10);
 
}



