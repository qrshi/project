#include "func.h"
#include "assert.h"


double getMin(double *dbdata,int isize)
{
 double dbmin;
 int i;
	
// 	assert((dbdata!=NULL)&&(isize>0));
	
	dbmin=dbdata[0];
	
	for(i=1;i<isize;i++)
	{
		if(dbmin>dbdata[i])
		{
			dbmin=dbdata[i];
		}

	}
	
	return dbmin;
}

double getMax(double *dbdata,int isize)
{
 double dbmax;
 int i;
	
// 	assert((dbdata!=NULL)&&(isize>0));
	
	dbmax=dbdata[0];
	
	for(i=1;i<isize;i++)
	{
		if(dbmax<dbdata[i])
		{
			dbmax=dbdata[i];
		}
	}
	
	return dbmax;
}

double getAverage(double *dbdata,int isize)
{
 double dbsum=0;
 int i;
	
// 	assert((dbdata!=NULL)&&(isize>0));

	for(i=0;i<isize;i++)
	{
		dbsum+=dbdata[i];
	}
	
	return dbsum/isize;
}

double unKnown(double *dbdata,int isize)
{
	return 0;
}


typedef double (*PF)(double* dbdata,int isize);

PF getOperation(char c)
{
	switch(c)
	{
		case 'd':
			return getMax;
			break;
		case 'x':
			return getMin;
			break;
		case 'p':
			return getAverage;
			break;		
		
		default:
			return unKnown;
		break;
	}
}
 

void u_funcmain(void)
{
	double dbdata[]={3.1415926,1.4142,-0.5,999,-313,365};
	int isize=sizeof(dbdata)/sizeof(dbdata[0]);
	char c;
	PF func;
	
	
	func=getOperation('d');

	func(dbdata,isize);//funcÓë(*func)µÈ¼Û
	(*func)(dbdata,isize);

}



