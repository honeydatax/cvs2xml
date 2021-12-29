#include <stdio.h>
#include <string.h>

void afill(s1,c,pos)
char *s1;
char c;
int pos;
{
	int i=0;
	int i1=strlen(s1);
	int i2=pos/2;
	for(i=0;i<i2;i++){
		s1[i]=c;
		s1[i1-i-1]=c;
	}
}






int main(){
	char s[80];
	strcpy(s,"hello world");
	afill(s,'.',5);
	printf("%s \n",s);
	return 0;
}