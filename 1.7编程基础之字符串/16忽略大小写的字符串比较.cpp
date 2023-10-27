#include <stdio.h>
#include <string.h>
int main (){
	char str1[100];
	char str2[100];
	gets(str1);
	gets(str2);
	int a=strlen(str1);
	int b=strlen(str2);
	for (int i=0;i<a;i++){
		if (str1[i]<='z'&&str1[i]>='a')str1[i]-=32;
	}
	for (int i=0;i<b;i++){
		if (str2[i]<='z'&&str2[i]>='a')str2[i]-=32;
	}
	int res=strcmp(str1,str2);
	if (res==0)printf ("=");
	else if (res<0)printf ("<");
	else printf (">");
	return 0;
} 
