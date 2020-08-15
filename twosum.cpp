#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i=0;//循环变量
    int j=0;  
    int *pb=(int *)malloc(numsSize*sizeof(int));//影子数组 int * 强转成整形内存块
    memset(pb,0,numsSize*sizeof(int));//影子数组初始化
    int *pout=(int *)malloc(numsSize*sizeof(int));//下标数组
    memset(pout,0,numsSize*sizeof(int));//下标数组初始化
    int *p=pout;//指针变量
    for(i=0;i<numsSize-1;++i)
    {
        if(1 == pb[i])
        {
            continue;
        }
        for(j = i+1;j < numsSize ; ++j)
        {
            if(1 == pb[j])
            {
                continue;
            }
            if(target == nums[i]+nums[j])
            {
                *p++=i;
                *p++=j;
                pb[i]=1;
                pb[j]=1;
                *returnSize+=2;
            }
        }
      }
        free(pb);
        pb=NULL;
        return pout;
};

void main()
{
	int i=0;
	int nums[8]={0};
	int target=9;
	int nlen=0;
	for(i=0;i<8;i++)
	{
		scanf("%d",&nums[i]);
	}
	int *p=twoSum(nums,8,target,&nlen);
	for(i=0;i<nlen;i+=2)
	{
		printf("%d%d",p[i],p[i+1]);
		putchar(10);
	}
	free(p);
	p=NULL;
}
