/*#include<stdio.h>
void move(int *a,int n);
void killone(int *a,int n);
void main()
{
	int i=0;
	int a[41]={0};
	for(i=0;i<41;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<40;i++)//每次移动两个人 杀一个人
	{
		move(a,41-i);
		move(a,41-i);
		killone(a,41-i);

	}
	printf("%d\n",a[0]);
}
void move(int *a,int n)
{
	int temp=a[0];
	int i=0;
	for(i=1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	a[n-1]=temp;
}
void killone(int *a,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		a[i-1]=a[i];
	}
}*/
/*--------------------------------------------------*/
/*
#include<stdio.h>

void main()
{
	int n=41;
	int f=0;
	int m=3;
	int i=0;
	for(i=1;i<=n;i++)
	{
		f=(f+m)%i;

	}
	printf("%d\n",f+1);
}*/
/*---------------------------------------------------*/
/*#include<stdio.h>
#define M 41
void main()
{
	int temp=0;
	int b=1;
	int k=0;
	int i=1;
	for(i=1;i<M;i++)
	{
		temp=b+3*k;
		if(i==temp)
		{
			b=2;
			k=0;
			continue;
		}
		else if(i-temp==1)
		{
			b=1;
			k=0;
			continue;
		}
		k++;
	
	}
	printf("%d \n",temp);
}*/
/*-----------------------------------------------*/
#include<stdio.h>
void main()
{
	int i=0;
	int j=0;
	int count=0;
	int a[41]={0};
	for(i=0;i<41;i++)
		a[i]=i+1;
	for(i=0;i<40;i++)
	{
		while(1)
		{
			if(a[j]!=0)
			{
				count++;
				if(count==3)
				{
					a[j]=0;
					count=0;
					break;
				}
				j++;
				if(j==41)
					j=0;
			}
		}
	}
	for(i=0;i<41;i++)
	{
		if(a[i]!=0)
		{
			printf("%d\n",a[i]);
		}
	}
}