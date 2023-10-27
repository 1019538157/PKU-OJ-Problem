#include <stdio.h>
int main (){
	int n,a,b;
	scanf ("%d %d %d",&n,&a,&b);
	int na[a]={0},nb[b]={0}; 
	for (int i=0;i<a;i++){
		scanf ("%d",&na[i]);
	}
	for (int i=0;i<b;i++){
		scanf ("%d",&nb[i]);
	}
	int sa=0,sb=0,za=0,zb=0;
	for (int i=0;i<n;i++){
		if (na[za]==0&&nb[zb]==2)sa++;
		else if (na[za]==0&&nb[zb]==5)sb++;
		else if (na[za]==2&&nb[zb]==5)sa++;
		else if (na[za]==2&&nb[zb]==0)sb++;
		else if (na[za]==5&&nb[zb]==2)sb++;
		else if (na[za]==5&&nb[zb]==0)sa++;
		za++;zb++;
		if (za==a)za=0;
		if (zb==b)zb=0; 
	}
	if (sa>sb)printf ("A");
	else if (sb>sa)printf ("B");
	else printf ("draw");
	return 0;
}
