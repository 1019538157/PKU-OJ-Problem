#include <stdio.h>
#include <string.h>
int main (){
	int n;
	scanf ("%d",&n);
	char str[110];
	for (int i=0;i<n;i++){
		scanf ("%s",str);
		int len=strlen(str);
		for (int t=0;t<len;t++){
			if (t==0){
				if (str[t]>='a'&&str[t]<='z')str[t]-=32;
			}else {
				if (str[t]>='A'&&str[t]<='Z')str[t]+=32;
			}
		}
		printf ("%s\n",str);
	}
	return 0;
}
