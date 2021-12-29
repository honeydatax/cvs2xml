#include <stdio.h>

char *c_hello(){
	return "hello world\n";
}


int main(){
	printf("%s\n",c_hello());
	return 0;
}