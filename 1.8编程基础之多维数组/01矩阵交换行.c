#include <stdio.h>
int main (){
	int count[5][5];
	for (int i=0;i<5;i++){
		for (int t=0;t<5;t++){
			scanf ("%d",&count[i][t]);
		}
	}
	int n,x;
	scanf ("%d %d",&n,&x);n--;x--;
	int mid[5];
	for (int i=0;i<5;i++)mid[i]=count[n][i];
	for (int i=0;i<5;i++)count[n][i]=count[x][i];
	for (int i=0;i<5;i++)count[x][i]=mid[i];
	int y=0;
	for (int i=0;i<5;i++){
		for (int t=0;t<5;t++){
			if (y!=4)printf ("%d ",count[i][t]);
			else {
				printf ("%d\n",count[i][t]);
				y=-1;
			}
			y++;
		}
	}
}
