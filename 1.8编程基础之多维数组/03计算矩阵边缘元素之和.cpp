#include <stdio.h>
int arr[200][200];
int main (){
	int m,n;
	scanf ("%d %d",&m,&n);
	for (int i=0;i<m;i++){
		for(int t=0;t<n;t++){
			scanf ("%d",&arr[i][t]);
		}
	}
	if (m!=1&&n!=1){
		int sum=0;
		for (int i=0;i<n;i++){
			sum+=arr[0][i];
			sum+=arr[m-1][i];
		}
		for (int i=0;i<m;i++){
			sum+=arr[i][0];
			sum+=arr[i][n-1];
		} 
		sum=sum-arr[0][0]-arr[0][n-1]-arr[m-1][0]-arr[m-1][n-1];
		printf ("%d",sum);
	}else if (m==0&&n==0){
		printf ("0");
	}else if (m==1&&n!=1){
		int sum=0;
		for (int i=0;i<n;i++){
			sum+=arr[0][i];
		}
		printf ("%d",sum);
	}else if (n==1&&m!=1){
		int sum=0;
		for (int i=0;i<m;i++){
			sum+=arr[i][0];
		}
		printf ("%d",sum);
	}else {
		printf ("%d",arr[0][0]);
	}
	return 0;
} 
