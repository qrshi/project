#include "funcg.h"
#include "assert.h"


double addg(double data1,double data2)
{
 
	return (data1+data2);
}

double sub(double data1,double data2)
{
	return (data1-data2);
}

double mult(double data1,double data2)
{
	return (data1*data2);
}

double div(double data1,double data2)
{
	return (data1/data2);
}

//使用函数指针数组替代switch语句
typedef double (*PF)(double data1,double data2);
PF oper_func[]={addg,sub,mult,div};

 
 

void u_funcgmain(void)
{
	double dbdata[]={3.1415926,1.4142,-0.5,999,-313,365};
	int isize=sizeof(dbdata)/sizeof(dbdata[0]);
	char c;
	int preessres=1;
	

	oper_func[preessres](dbdata[0],dbdata[1]);

}



