#include <stdio.h>
#include <string.h>
char str[100];
int main (){
	gets(str);
	int len=strlen(str);
	for (int i=0;i<len;i++){
		if (str[i]>='a'&&str[i]<='y')str[i]++;
		else if(str[i]>='A'&&str[i]<='Y')str[i]++;
		else if(str[i]=='z'||str[i]=='Z')str[i]-=25;
	}
	printf ("%s",str);
	return 0;
}
