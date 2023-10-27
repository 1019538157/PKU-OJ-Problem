#include <stdio.h>
#include <string.h>
int main (){
	char str[100];
	gets(str);
	int a=strlen(str);
	for (int i=0;i<a;i++){
		if (str[i]>='a'&&str[i]<='z')str[i]-=32;
		else if (str[i]>='A'&&str[i]<='Z')str[i]+=32;
	}
	char str1[a];
	for (int i=0;i<a;i++){
		str1[a-1-i]=str[i];
	}
	for (int i=0;i<a;i++){
		if (str1[i]>='a'&&str1[i]<='w')str1[i]+=3;
		else if (str1[i]>='A'&&str1[i]<='W')str1[i]+=3;
		else str1[i]-=23;
	}
	printf ("%s\n",str1);
	return 0;
}
