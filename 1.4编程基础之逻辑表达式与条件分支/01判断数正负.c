#include <stdio.h>
int main (){
	long long a;
	scanf ("%lld",&a);
	if (a>0){
		printf("positive");
	}else if (a==0){
		printf ("zero");
	}else {
		printf ("negative");
	}
	return 0;
}
