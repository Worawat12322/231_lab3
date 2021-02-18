#include<stdio.h>
int main(){
	int x,i,ax,check=0,m,k;
	scanf("%d",&x);
	int ans[x]={0};
	ax=x;
 	if(x>=0&&x<=2000000)
 	{
	for(j=0;x>0;x--,j++)
 	{
 		if(x%2==0)
		{
			continue;	
		}
		for(m=3;m<x;m++)
		{
			if(x%m==0)
			{
				check = 1;
				break;
			}
		}
		if(check==1)
		{
			continue;
		}
		else
		{
			ans[j]=x;
		}
	}
}
	int 
	for(k=0;k>=ax;k++)
	{
		
	}
	return 0;
}
