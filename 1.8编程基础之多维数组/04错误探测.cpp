#include <stdio.h>
int arr[200][200];
int main (){
	int n;
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		for (int t=0;t<n;t++){
			scanf ("%d",&arr[i][t]);
		}
	}
	int hang[n]={0};
	int lie[n]={0};
	int hangsum=0,liesum=0;
	for (int i=0;i<n;i++){
		int sum=0;
		for (int t=0;t<n;t++){
			if (arr[i][t]==1)sum++;
		}
		hang[i]=sum%2;
	}
	for (int i=0;i<n;i++){
		int sum=0;
		for (int t=0;t<n;t++){
			if (arr[t][i]==1)sum++;
		}
		lie[i]=sum%2;
	}
	int res1=0,res2=0;
	for (int i=0;i<n;i++){
		if (hang[i]==1)hangsum++;
	}
	for (int i=0;i<n;i++){
		if (lie[i]==1)liesum++;
	}
	if (liesum==0&&hangsum==0){
		printf ("OK");
	}else if (liesum==1&&hangsum==1){
		int x,y;
		for (int i=0;i<n;i++){
			if (hang[i]==1){
				x=i;break;
			}
		}
		for (int i=0;i<n;i++){
			if (lie[i]==1){
				y=i;break;
			}
		}
		printf ("%d %d",x+1,y+1);
	}else {
		printf ("Corrupt");
	}
}
