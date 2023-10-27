#include <stdio.h>
#include <string.h>
int main (){
	char str1[300];
	char str2[300];
	char str3[300];
	gets(str1);
	gets(str2);
	int a=strlen(str1);
	int b=strlen(str2);
	int res=0;
	int d=0;
	if (a>b){
		for (int i=0;i<a;i++){
			int z=0;
			for (int t=i;t<i+b;t++){
				str3[z]=str1[t];
				z++;
			}
			res=strcmp(str3,str2);
			if (res==0){
				res=1;
				break;
			}
		}
		if (res==1){
			printf ("%s is substring of %s",str2,str1);
			d=1;
		}
	}else if (a<b){
		for (int i=0;i<b;i++){
			int z=0;
			for (int t=i;t<i+a;t++){
				str3[z]=str2[t];
				z++;
			}
			res=strcmp(str3,str1);
			if (res==0){
				res=1;
				break;
			}
		}
		if (res==1){
			printf ("%s is substring of %s",str1,str2);
			d=1;
		}
	}else {
		res=strcmp(str1,str2);
		if (res==0){
			printf ("%s is substring of %s",str1,str2);
			d=1;
		}
	}
	if (d==0)printf ("No substring");
	return 0;
}
