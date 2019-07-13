/*#include<stdio.h>
int isValid(char *s);
void main()
{
	int res=0;
	char s[]={"()(}()"};
	res=isValid(s);
	if(res)
	{
		printf("error!");
	}
	else
	{
		printf("right!");
	}
}*/
#define ERROR 1
#define NORMAL 0
int isValid(char *s)
{
	if(s==NULL)
		return ERROR
	char *p=s;
	char *q=s;
	for(;*p!='\0';)
	{
		int suc=0;//
		for(q=p+1;*q!='\0';q++)
		{	
			if(*p=='('&&*q==')'||\
			   *p=='['&&*q==']'||\
			   *p=='{'&&*q=='}')
			{	
				suc=1;
				p++;
				if(p==q)
					p++;
				break;
			}
		}
		if(suc==0)
			return ERROR;	
	}
	return NORMAL;
}