#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int shu[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&shu[i]);
	}
	int zhid;
	scanf ("%d",&zhid);
	int count=0;
	for (int i=0;i<n;i++){
		if (shu[i]==zhid)count++;
	}
	printf ("%d",count);
	return 0;
} 
