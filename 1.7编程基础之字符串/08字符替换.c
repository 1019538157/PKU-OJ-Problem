#include<stdio.h>
#include<string.h>
int main (){
	char str[100];
	char str1,str2;
	scanf ("%s",str);getchar();
	scanf ("%c",&str1);getchar();
	scanf ("%c",&str2);
	int len=strlen(str);
	for (int i=0;i<len;i++){
		if (str[i]==str1)str[i]=str2;
	}
	printf ("%s",str);
	return 0;
}
