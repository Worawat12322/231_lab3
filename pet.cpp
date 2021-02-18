#include<stdio.h>
int main(){
	int point[4][5],win[5];
	int i,j,score,dgee,k;
	for(j=0;j<5;j++)
	{
		for(i=0;i<4;i++)
		{
			scanf("%d",&point[i][j]);
		}
	}
	win[0]=point[0][0]+point[1][0]+point[2][0]+point[3][0];
	win[1]=point[0][1]+point[1][1]+point[2][1]+point[3][1];
	win[2]=point[0][2]+point[1][2]+point[2][2]+point[3][2];
	win[3]=point[0][3]+point[1][3]+point[2][3]+point[3][3];
	win[4]=point[0][4]+point[1][4]+point[2][4]+point[3][4];
	score=win[0];
	dgee=0;
	for(k=0;k<4;k++)
	{
		if(score<win[k+1])
		{
			score=win[k+1];
			dgee=k+2;
		}
	}
	printf("%d %d",dgee,score);
	return 0;
}
