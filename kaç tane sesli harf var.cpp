#include<stdio.h>

int main(){
	char s[40],c[40], gecici;
	int n,m=0;
	printf("Bir seyler yazin:");
	gets(s);
	for(n=0;s[n]!='\0';n++){
		if(s[n] == 'a' || 'e' || 'i' || 'o' || 'u'){
			c[m]=s[n];
			m++;
		}
	}
	printf("Toplamda %d tane sesli harf var ve bu harfler ", m);
	for(n=0;c[n]!='\0';n++){
		printf("\'%c\' ",c[n]);
	}
}
