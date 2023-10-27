#include <stdio.h>
int main (){
	double fei[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65,};
	int num[10]={0};
	for (int i=0;i<10;i++){
		scanf ("%d",&num[i]);
	}
	double sum=0.0;
	for (int i=0;i<10;i++){
		sum+=num[i]*fei[i];
	}
	printf ("%.1lf",sum);
	return 0;
}
