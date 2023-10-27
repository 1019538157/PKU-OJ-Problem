#include <stdio.h>
int main (){
	char str;
	int a;
	float c;
	double d;
	scanf ("%c",&str);
	scanf ("%d",&a);
	scanf ("%f",&c);
	scanf ("%lf",&d);
	printf ("%c %d %.6f %.6lf",str,a,c,d);
	return 0;
} 

