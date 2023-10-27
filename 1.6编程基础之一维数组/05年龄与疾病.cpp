#include <stdio.h>
int main (){
	int n;
	scanf  ("%d",&n);
	int age;
	int res[6]={0};
	for (int i=0;i<n;i++){
		scanf ("%d",&age);
		if (age>=0&&age<=18)res[0]++;
		else if (age>=19&&age<=35)res[1]++;
		else if (age>=36&&age<=60)res[2]++;
		else if (age>=61)res[3]++;
	}
	for (int i=0;i<4;i++){
		printf ("%.2lf%%\n",(double)res[i]*100/n);
	}
	return 0;
}
