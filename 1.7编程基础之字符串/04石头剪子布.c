#include <stdio.h>
#include <string.h>
int main (){
	int n;
	scanf ("%d",&n);
	char a[10];
	char b[10];
	for (int i=0;i<n;i++){
		scanf ("%s %s",a,b);
		if (a[0]=='R'&&b[0]=='S')printf ("Player1\n");
		else if(a[0]=='S'&&b[0]=='R')printf ("Player2\n");
		else if(a[0]=='S'&&b[0]=='P')printf ("Player1\n");
		else if(a[0]=='P'&&b[0]=='S')printf ("Player2\n");
		else if(a[0]=='R'&&b[0]=='P')printf ("Player2\n");
		else if(a[0]=='P'&&b[0]=='R')printf ("Player1\n");
		else printf ("Tie\n");
	}
}
