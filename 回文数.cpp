#include<stdio.h>
bool isPalindrome(int x){//�ж�һ�����Ƿ�Ϊ������
    int i=0;
	int y=x;
	int sum=0;
	while(y!=0)
	{
		sum=sum*10+y%10;
		y=y/10;
	}
	if(x==sum)
	{
		return true;
	}
	return false;
}

void main()
{
	int x=1234321;
	printf("%d\n",isPalindrome(x));
}
