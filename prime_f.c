#include<stdio.h>
int main(){
	int x,i,ax,check=0,m;
	scanf("%d",&x);
 	if(x>=0&&x<=2000000)
 	{
	for(;x>0;x--)
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
			printf("%d",x);
			return 0;
		}
	}
}
	return 0;
}
