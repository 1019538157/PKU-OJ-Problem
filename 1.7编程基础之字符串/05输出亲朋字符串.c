#include <stdio.h>
#include <string.h>
int main () {
	char str[1000];
	gets(str);
	int len=strlen(str);
	char res[len];
	for (int i=0;i<len;i++){
		if  (i==len-1){
			res[i]=str[i]+str[0];
			break;
		}else {
			res[i]=str[i]+str[i+1];
		}
		printf ("%c",res[i]);
	}
	printf ("%c",res[len-1]);
	return 0;
}
