#include <bits/stdc++.h>
using namespace std;

int main (){
	char str[1100];
	gets (str);
	int len=strlen(str);
	for (int i=0;i<len;i++){
		if (str[i]<='z'&&str[i]>='a')str[i]-=32;
	}
	printf ("%s",str);
	return 0;
}
