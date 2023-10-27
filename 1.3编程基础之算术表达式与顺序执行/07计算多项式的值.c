#include <stdio.h>
#include <math.h>
int main (){
	double a,b,c,d,x,res=0;
	scanf ("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
	res=a*pow(x,3)+b*pow(x,2)+c*x+d;
	printf ("%.7lf",res);
	return 0;
}
