#include <stdio.h>
#include <string.h>
int main (){
	double fa;
	char dna1[510]={0};
	char dna2[510]={0};
	scanf ("%lf",&fa);
	scanf ("%s",dna1);
	scanf ("%s",dna2);
	int len1=strlen(dna1);
	int len2=strlen(dna2);
	int len;
	if (len1>len2){
		len=len1;
	}else {
		len=len2;
	}
	int t=0;
	for (int i=0;i<len;i++){
		if (dna1[i]==dna2[i])t++;
	}
	double result=t*1.0/len;
	if (result>=fa){
		printf ("yes");
	}else {
		printf ("no");
	}
	return 0;
}
