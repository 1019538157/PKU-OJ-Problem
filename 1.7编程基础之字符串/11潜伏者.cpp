#include <bits/stdc++.h>
using namespace std;
int main (){
	char str1[1100];
	char str2[1100];
	char str3[1100];
	int arr[1100]={0};
	int brr[1100]={0};
	int crr[1100]={0};
	int drr[1100]={0};
	scanf ("%s",str1);
	scanf ("%s",str2);
	scanf ("%s",str3);
	int len=strlen(str1);
	int res=1;
	for (int i=0;i<len;i++){
		if (crr[str1[i]]==1&&arr[str1[i]]!=str2[i]){
			res=3;
			break;
		}
		if (drr[str2[i]]==1&&brr[str2[i]]!=str1[i]){
			res=3;
			break;
		} 
		arr[str1[i]]=str2[i];
		brr[str2[i]]=str1[i];
		crr[str1[i]]=1;
		drr[str2[i]]=1;
	}
	for (int i=65;i<=90;i++){
		if (crr[i]==0){
			res=2;
			break;
		}
	}
	if (res==2||res==3){
		printf ("Failed");
	}else {
		int b=strlen(str3);
		for (int i=0;i<b;i++){
			printf ("%c",arr[str3[i]]);
		}
	}
	return 0;
}
