#include <stdio.h>
#include <string.h>
	char str1[100000];
	char str2[100000];
int main (){
	int i=0;
	char str;
	while (str!='\n'){
		scanf ("%c",&str);
		if (str!=' '){
			str1[i]=str;
			i++;
		}
	}
	i=0,str='0';
	while (str!='\n'){
		scanf ("%c",&str);
		if (str!=' '){
			str2[i]=str;
			i++;
		}
	}
	int a=strlen(str1),b=strlen(str2);
	for (int i=0;i<a;i++){
		if (str1[i]>='a'&&str1[i]<='z')str1[i]-=32;
	}
	for (int i=0;i<b;i++){
		if (str2[i]>='a'&&str2[i]<='z')str2[i]-=32;
	}
	int x=1;
	if(a==b){
		for (int i=0;i<a;i++){
			if (str1[i]!=str2[i]){
				x=0;
				break;
			}
		}
		if (x==1)printf ("YES");
		else printf ("NO");
	}else printf ("NO");
	return 0;
}
