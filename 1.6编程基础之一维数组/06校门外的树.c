#include <stdio.h>
int main (){
	int l,n;
	scanf ("%d %d",&l,&n);
	int zong[l+1];
	int left[n];
	int right[n];
	for (int i=0;i<=l;i++)zong[i]=0;
	for (int i=0;i<n;i++){
		scanf ("%d %d",&left[i],&right[i]);
	}
	for (int i=0;i<n;i++){
		for (int t=left[i];t<=right[i];t++){
			zong[t]=1;
		}
	}
	int count=0;
	for (int i=0;i<=l;i++){
		if (zong[i]==0){
			count++;
		}
	}
	printf ("%d",count);
	return 0;
} 
