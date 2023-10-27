#include <bits/stdc++.h>
using namespace std;

int arr[10005];

int main (){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int res=-1;
	int x;
	scanf("%d",&x);
	for (int i=0;i<n;i++){
		if(x==arr[i]){
			res=i+1;
			break;
		}
	}
	printf ("%d",res);
	return 0;
}
