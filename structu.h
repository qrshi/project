#ifndef	__STRUCTU_H
#define	__STRUCTU_H
 
typedef int bool;
#define ODD 1 //��У��
#define EVEN 0 //żУ��

typedef bool (* const PF_validator)(void *pdata,int value);
typedef struct _t_Range{
	PF_validator validate;
	const int min;
	const int max;
}t_range;
//�ϲ�
typedef struct _t_oddeven{
	PF_validator validate;
 bool iseven;
}t_oddeven;


//�ϲ�
bool validaterange(void *pdata,int value);
bool validateoddeven(void *pdata,int value);

//�ϲ�
#define newvalidator(min,max)	{validaterange,(min),(max)}
#define newoddevenvalidator(iseven) {validateoddeven,(iseven)}

void u_structmain(void);

#endif




