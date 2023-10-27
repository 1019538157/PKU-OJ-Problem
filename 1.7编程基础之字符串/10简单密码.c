#include <stdio.h>
#include <string.h>
char str[250];
int main (){
	gets(str);
	int len=strlen(str);
	for (int i=0;i<len;i++){
		if (str[i]>='F'&&str[i]<='Z')str[i]-=5;
		else if(str[i]>='A'&&str[i]<='E')str[i]+=21;
	}
	printf ("%s",str);
	return 0;
}
