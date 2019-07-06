/*×Ö·û          ÊýÖµ
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

*/

int romanToInt(char * s)
{
	int i=0;
	int res=0;
	char *p=s;
	while(*p!='\0')
	{
		if(*p=='I')
		{
			res++;
			if(*++p=='V'||*p=='X')
				res--;
		}
		if(*p=='V')
			res+=5;
		if(*p=='X')
		{
			res+=10;
			if(*++p='L'||*p=='C')
				res-=10;
		}
		if(*p=='L')
			res+=50;
		if(*p=='C')
			res+=100;
			if(*++p=='D'||*p=='M')
				res-=100;
		if(*p=='D')
			res+=500;
		if(*p=='M')
			res+=1000;
	}
	return 1;
}
