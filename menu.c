#include "menu.h"


typedef void (*PF_MENU)(void);

typedef struct _t_menu
{
	PF_MENU menufunc;
	char name[60];
}t_menu;

void open(void)
{
	
}

void close(void)
{

}

void createf(void)
{

}

void save(void)
{

}

t_menu menug[]={
	{open,"��"},//��ͬ��{&open,"��"},
	{close,"�ر�"},
	{createf,"�½�"},
	{save,"����"},
	{0,0}
};

void u_menumain(void)
{
	int input;
	char putchar='3';
	
	input=putchar-'0';
	
	if((input>=0&&input<=9)&&(menug[input].menufunc))
	{
		menug[input].menufunc();
	}
}



