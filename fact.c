#include<stdio.h>
#include<math.h>
int main(){
	int k;
	int a=2,i=3;
	scanf("%d",&k);
	int kk=k;
    while (k%2==0) 
    { 
        printf("%d\n",a); 
        k = k/2; 
    } 
	for(i=3;i<kk;i+=2)
    {
    	while(k%i==0)
		{
			printf("%d\n",i);	
			k=k/i;
		}		
	}
	printf("0");
	return 0;
}
