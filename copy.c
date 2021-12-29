#include <stdio.h> 
#include <string.h> 
char *copys(s)
char *s;
{
	return s;
}

int main(){
	char s[80];
	char *ss;
	strcpy(s,"hello world");
	ss=copys(s);
	printf("%s\n",ss);
	return 0;
}