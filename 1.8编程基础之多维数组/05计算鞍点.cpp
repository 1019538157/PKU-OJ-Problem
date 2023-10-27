#include <stdio.h>
int arr[5][5];

int min(int arr[5][5],int t){
	int minid=0;
	for (int y=0;y<5;y++){
		if (arr[y][t]<arr[minid][t])minid=y;
	}
	return minid;
}

int max(int arr[5][5],int i){
	int maxid=0;
	for (int y=0;y<5;y++){
		if (arr[i][y]>arr[i][maxid])maxid=y;
	}
	return maxid;
}
int main (){
	for (int i=0;i<5;i++){
		for (int t=0;t<5;t++){
			scanf ("%d",&arr[i][t]);
		}
	}
	for (int i=0;i<5;i++){
		/*for (int t=0;t<5;t++){*/
			int maxid=max(arr,1);
			int minid=min(arr,1);
			/*if (maxid==i&&t==minid){*/
				printf ("%d %d %d",maxid,minid,arr[maxid][minid]);
			/*	goto out;
			}
		}*/
	}
	out:
	return 0;
}
