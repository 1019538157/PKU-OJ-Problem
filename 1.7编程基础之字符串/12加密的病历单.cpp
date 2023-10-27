#include <stdio.h>
#include <string.h>
int main (){
	char str[100];
	scanf ("%s",str);
	int len=strlen(str);
	for (int i=0;i<len;i++){
		if (str[i]>='a'&&str[i]<='z')str[i]-=32;
		else if (str[i]>='A'&&str[i]<='Z')str[i]+=32;
	}
	char str1[100];
	for (int i=0;i<len;i++){
		str1[len-1-i]=str[i];
	}
	for (int i=0;i<len;i++){
		str[i]=str1[i];
	}
	for (int i=0;i<len;i++){
		if (str[i]>='a'&&str[i]<='w')str[i]+=3;
		else if (str[i]>='A'&&str[i]<='W')str[i]+=3;
		else str[i]-=23;
	}
	printf ("%s\n",str);
	return 0;
}
