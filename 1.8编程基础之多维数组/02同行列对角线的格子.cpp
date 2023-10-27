#include <bits/stdc++.h>
using namespace std;

int main (){
	int n,i,j;
	scanf ("%d %d %d",&n,&i,&j);
	for (int t=1;t<=n;t++){
		if (t!=n)printf ("(%d,%d) ",i,t);
		else printf ("(%d,%d)\n",i,t);
	}
	for (int t=1;t<=n;t++){
		if (t!=n)printf ("(%d,%d) ",t,j);
		else printf ("(%d,%d)\n",t,j);
	}
	int i2=i,j2=j;
	while (i2!=1&&j2!=1){
		i2--;j2--;
	}
	while (i2!=n&&j2!=n){
		printf ("(%d,%d) ",i2,j2);
		i2++;j2++;
	}printf ("(%d,%d)\n",i2,j2); 
	i2=i,j2=j;
	while (i2!=1&&j2!=n){
		i2--;j2++;
	}
	while (i2!=n&&j2!=1){
		printf ("(%d,%d) ",j2,i2);
		i2++;j2--;
	}printf ("(%d,%d)\n",j2,i2); 
}
