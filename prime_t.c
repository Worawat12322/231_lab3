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
	int mx=1,kanan=max[1];
	for(k=1;k<=max_ja;k++)
	{
		if(max[k]<max[k+1])
		{
			mx=k+1;
			kanan=max[k+1];
		}
	}
	printf("%d %d",mx,kanan);
	return 0;
}
