#include <stdio.h>
#include <string.h>

void lpos(s1,c,pos)
char *s1;
char c;
int pos;
{
	s1[strlen(s1)-pos]=c;
}


int main(){
	char s[80];
	strcpy(s,"hello world");
	lpos(s,'.',3);
	printf("%s \n",s);
	return 0;
}