# include<stdio.h>
int main(){
	char str[105];
	int n=0;
	while((str[n]=getchar())!='\n')
	{
		n++;
	}
	for(int i=n-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
