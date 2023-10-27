#include<stdio.h>
#include <string.h>
char str[1000];
int main (){
	gets(str);
	int len=strlen(str);
	for (int i=0;i<len;i++){
		if (str[i]=='A')str[i]='T';
		else if (str[i]=='T')str[i]='A';
		else if (str[i]=='C')str[i]='G';
		else if (str[i]=='G')str[i]='C';
	}
	printf ("%s",str);
	return 0;
}
