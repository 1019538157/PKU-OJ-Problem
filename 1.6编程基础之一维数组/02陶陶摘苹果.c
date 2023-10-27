#include <stdio.h>
int main (){
	int height[10];
	for (int i=0;i<10;i++){
		scanf ("%d",&height[i]);
	}
	int n;
	scanf ("%d",&n);
	n+=30;
	int sum=0;
	for (int i=0;i<10;i++){
		if (n>=height[i])sum++;
	}
	printf ("%d",sum);
	return 0;
}
