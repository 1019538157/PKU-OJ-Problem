#include <stdio.h>
int main (){
	char n;
	scanf ("%c",&n);
	int x=1,a=2;
	for (int i=1;i<=3;i++){
		for (int t=a;t>0;t--){
			printf (" ");
		}
		for (int y=1;y<=x;y++){
			if (y==x){
				printf ("%c\n",n);
			}else {
				printf ("%c",n);
			}
		}
		x+=2;
		a--;
	}
	return 0;
}
