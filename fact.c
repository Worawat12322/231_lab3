#include<stdio.h>
int main(){
	int k;
	int a=2;
	scanf("%d");
    for(;k!=0;)
	{
		if(k%a==0)
		{
			printf("%d",a);
			k=k/a;
		}
		else
		{
			a++;
		}
	}
	if(k==0)
	{
		printf("0");
	}
	return 0;
}
