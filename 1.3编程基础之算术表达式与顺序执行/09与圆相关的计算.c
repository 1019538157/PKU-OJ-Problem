#include <stdio.h>
int main (){
	double r,d,s,c;
	scanf ("%lf",&r);
	d=r*2;
	s=3.14159*r*r;
	c=d*3.14159;
	printf ("%.4lf %.4lf %.4lf",d,c,s);
	return 0;
}
