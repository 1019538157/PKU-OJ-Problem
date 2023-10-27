#include <stdio.h>
int main (){
	int n,a;
	scanf ("%d",&n);
	double res=0;
	for (int i=0;i<n;i++){
		scanf ("%d",&a);
		res+=a;
	}
	res/=n;
	printf ("%.2lf",res);
	return 0;
}
