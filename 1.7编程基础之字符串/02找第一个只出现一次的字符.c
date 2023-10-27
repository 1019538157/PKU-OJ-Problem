#include <stdio.h>
#include <string.h>
char str[100010];
int main (){
	int asc[26]={0};
	int cishu[123]={0};
	scanf ("%s",str);
	int a=strlen(str);
	int x=0;
	for (int i=0;i<a;i++){
		int pan=1;
		for (int t=0;t<26;t++){
			if (str[i]==asc[t]){
				pan=0;
				break;
			}
		}
		if (pan==1){
			asc[x]=str[i];
			x++;
		}
	}
	for (int i=0;i<a;i++){
		switch(str[i]){
			case'a':cishu['a']++;break;
			case'b':cishu['b']++;break;
			case'c':cishu['c']++;break;
			case'd':cishu['d']++;break;
			case'e':cishu['e']++;break;
			case'f':cishu['f']++;break;
			case'g':cishu['g']++;break;
			case'h':cishu['h']++;break;
			case'i':cishu['i']++;break;
			case'j':cishu['j']++;break;
			case'k':cishu['k']++;break;
			case'l':cishu['l']++;break;
			case'm':cishu['m']++;break;
			case'n':cishu['n']++;break;
			case'o':cishu['o']++;break;
			case'p':cishu['p']++;break;
			case'q':cishu['q']++;break;
			case'r':cishu['r']++;break;
			case's':cishu['s']++;break;
			case't':cishu['t']++;break;
			case'u':cishu['u']++;break;
			case'v':cishu['v']++;break;
			case'w':cishu['w']++;break;
			case'x':cishu['x']++;break;
			case'y':cishu['y']++;break;
			case'z':cishu['z']++;break;
		}
	}
	int z=1;
	for (int i=0;i<26;i++){
		if (cishu[asc[i]]==1){
			printf ("%c",asc[i]);
			z=0;
			break;
		}
	}
	if(z==1){
		printf ("no");
	}
	return 0;
}
