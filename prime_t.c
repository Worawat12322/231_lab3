#include<stdio.h>
int main(){
	int n,p,a,max_ja=0,k;
	int i,max[48]={0};
	scanf("%d",&n);
	if(n>=1&&n<=10000)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&p,&a);
			if((p>=1&&p<=48)&&(a>=1&&a<=50000))
			{
				max[p]=max[p]+a;
				if(p>max_ja)
				{
					max_ja=p;
				}
			}
		}
	}
	int prime_t=0,money=0;
	for(k=1;k<=max_ja-1;k++)
	{
		if(max[k]<max[k+1])
		{
			prime_t=k+1;
			money=max[k+1];
		}
	}
	printf("%d %d",prime_t,money);
	return 0;
}
