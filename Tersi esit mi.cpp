#include<stdio.h>

int main(){
	char s[40],c[40], gecici;
	int i,n,m=0;
	printf("Bir seyler yazin:");
	gets(s);
	for(n=0;s[n]!='\0';n++){
		c[n]= s[n];
	}
	for(i=0;i<n/2;i++){
		gecici=s[n-i-1];
		s[n-i-1] = s[i];
		s[i]=gecici;
	}
	for(n=0;s[n]!='\0';n++){
		if(c[n]==s[n]){
			m++;
		}
	}
	if(m==n){
		printf("esit");
	}
	else{
		printf("degil");
	}
}
