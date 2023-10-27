#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a[n]={0},b[n]={0};
	for (int i=0;i<n;i++)scanf ("%d",&a[i]);
	for (int i=0;i<n;i++)scanf ("%d",&b[i]);
	long long sum=0;
	for (int i=0;i<n;i++){
		sum+=a[i]*b[i];
	}
	printf ("%lld",sum);
	return 0;
}
