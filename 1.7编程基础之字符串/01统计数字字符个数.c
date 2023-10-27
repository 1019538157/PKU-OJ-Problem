#include <stdio.h>
#include <string.h>
int main (){
	char str;
	int i=0,a,b;
	while (str!='\n'){
		scanf ("%c",&str);
		if (str>='0'&&str<='9')i++;
	}
	printf ("%d",i);
	return 0;
}
